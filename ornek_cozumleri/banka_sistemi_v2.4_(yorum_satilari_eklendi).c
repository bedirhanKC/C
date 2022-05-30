/*
Bedirhan Kömürcü
30.05.2022
15.21
*/

#include<stdlib.h>
#include<stdio.h>

#define KullaniciSayisi 20

struct musteri{ //bir musteri structi olusturuyoruz.
	
	int kontrol; //bu veri kontrol icin kullanilacak. Eger kullanici girisi gerceklesirse 0'a esitlenecek.
	int HesapNo;
	char isim[30];
	char soyisim[30];
	float bakiye;	
	
};

typedef struct musteri musteri;

void YeniListe(){ //bos kullanicilardan olusan yeni bir liste olusturuluyor.
	
	FILE *myptr;
	musteri temp={1,0,"","",0.0}; //bos bir kullanici olusturuyoruz
	
	myptr=fopen("Banka.dat","w");
	
	int i ;
	
	for(i=1;i<KullaniciSayisi+1;i++){ //bu for dongusu icerisinde kullanici sayisi kadar bos kullaniciyi alt alta yaziyoruz
		
		temp.HesapNo=i;
		
		fwrite(&temp,sizeof(musteri),1,myptr);
		
	}
	
	fclose(myptr);
	printf("\nislem basariyla tamamlandi.\n");
	
}

void YeniKullanici(int arama){ // parametre olarak kontrolu yapilmis hesapno alýnýyor (arama=hesapno)
	
	FILE *myptr;
	musteri temp;
	
	myptr=fopen("Banka.dat","r+");
		
	char bugfix[3];	
		
	fseek(myptr,(arama-1)*sizeof(musteri),SEEK_SET);
	fread(&temp,sizeof(musteri),1,myptr);
	
	if(temp.kontrol==0){ //bu if icinde int kontrol degerini kullanarak kullanicinin daha onceden kaydi yapilip yapilmadigini kontrol ediyoruz
		
		printf("\nBu kullanicinin kaydi daha onca yapilmistir.\n");
			
	}else{ //eger kayit yapilmamissa yeni kullanici verileri aliniyor ve kayit tamamlaniyor
		
		fseek(myptr,(arama-1)*sizeof(musteri),SEEK_SET);	
		
		printf("Isim giriniz : ");
		gets(bugfix);
		gets(temp.isim);
		printf("Soyisim giriniz : ");
		gets(temp.soyisim);
		printf("Bakiye giriniz : ");
		scanf("%f",&temp.bakiye);
		temp.HesapNo=arama;
		temp.kontrol=0;
	
		fwrite(&temp,sizeof(musteri),1,myptr);
	
		fclose(myptr);
		
		printf("\nislem basariyla tamamlandi.");
		
	}	
}

void Listeleme(){ //tek tek butun kullanicilar okunarak konsola yazdirilacak
	
	FILE *myptr;
	musteri temp;
	
	myptr=fopen("Banka.dat","r");
	
	int i ;
	
	printf("\n---------LIST------------\n");
	
	for(i=1;i<KullaniciSayisi+1;i++){
		
		fread(&temp,sizeof(musteri),1,myptr); // okuma islemi
		
		if(temp.kontrol==1){ //bu hesap numarasina kayit yapilmamissa kotu goruntuye sebep vermemek icin sadece hesap no yazdiriliyor
			
			printf("%d \n",temp.HesapNo);
			
		}else{ // eðer kayitliysa kullanicinin verileri yazdiriliyor
			 
			printf("%d %s %s %.2f \n",temp.HesapNo,temp.isim,temp.soyisim,temp.bakiye);
			
		}	
	}
	
	fclose(myptr);
	
}

int NegatifBakiyeMusteriSayisi(){ //tek tek tum musteriler kontrol edilecek ve negatif bakiyede olanlarin sayisi toplanarak gidecek
	
	FILE *myptr;
	musteri temp;
	int sayi=0;
	
	myptr=fopen("Banka.dat","r");
	
	int i ;
	
	for(i=1;i<KullaniciSayisi+1;i++){
		
		fread(&temp,sizeof(musteri),1,myptr); //kullanici okunuyor
		
		if(temp.kontrol==0 && temp.bakiye<0 ) sayi++; //kullanici kayitliysa ve bakiye 0dan azsa sayi arttiriliyor
	}
	
	return sayi; //ve sayi donduruluyor
	fclose(myptr);
	
}

void MaxBakiyeyeSahipMusteri(){ // kayitli musterilerden en yuksek bakiyeye sahip olani bulma
	
	FILE *myptr;
	musteri temp,max;
	int MaxNo;
	
	myptr=fopen("Banka.dat","r");
	
	int i;
	int sayac=0; //bu sayac yapisi ilk max atamasini yapmak icin kullanilacak
	
	for(i=1;i<KullaniciSayisi+1;i++){
		
		fread(&temp,sizeof(musteri),1,myptr); //kullanici okunuyor
		
		if(temp.kontrol==0 && sayac==0){ // sayac 0'sa ilk max degeri icin kayitli ilk kullaniciyi seciyorum. bu durumda ilk kontrol==0 saglayan kullanici ilk kullanici oluyor
											
			
			max=temp; 
 			sayac++;
			
		}else if(temp.kontrol==0 && temp.bakiye>max.bakiye ){ //burda ise yeni okunan deger max'dan buyukse ve kayitliysa yeni max deger oluyor
			
			max=temp;
			
		}
	}
	
	printf("\nEn yuksek bakiyeye sahip kullanici ;\n%d %s %s %.2f\n",max.HesapNo,max.isim,max.soyisim,max.bakiye);

	fclose(myptr);
	
}

void TXTolusturma(){ //listeleme isleminden farkli bir durum yok. sadece dosyaya yazdiriliyor ve 300'un ustundeki bakiyedeki kullanicilar yazdiriliyor.
	
	FILE *myptr;
	FILE *mfptr;
	
	musteri temp;
		
	myptr=fopen("Banka.dat","r");
	mfptr=fopen("List.txt","w");
	
	int i;
	
	for(i=0;i<KullaniciSayisi+1;i++){ //tek tek tum musterileri okumaya basliyorum
		
		fread(&temp,sizeof(musteri),1,myptr);
		
		if(temp.bakiye>300){ //300'den buyukse dosyaya yazdiriyorum
			
			fprintf(mfptr,"%d %s %s %.2f \n",temp.HesapNo,temp.isim,temp.soyisim,temp.bakiye);
			
		}		
	}	
	
	printf("\nList isimli txt dosya olusturuldu.\n");
	
}

void KullaniciArttiripGuncelleme(){ // bakiyesinin %50si bakiyeye eklendiginde 300'u gecen kullanicilari guncelleyen fonksiyon
	
	FILE *myptr;
	musteri temp;
	
	myptr=fopen("Banka.dat","r+");
	
	int i;
	
	for(i=0;i<KullaniciSayisi+1;i++){
		
		fread(&temp,sizeof(musteri),1,myptr); //tek tek kullanicilari okuyorum
		
		if(temp.kontrol==0 && ((temp.bakiye)+(temp.bakiye*0.5))>300){ //kullanici kayitliysa ve hesaplamayla birlikte bakiyesi 300'u geciyorsa;
			
			temp.bakiye+=temp.bakiye*0.5; //yeni bakiyeyi hesapliyorum
			fseek(myptr,(i-1)*sizeof(musteri),SEEK_SET); //fread ile sonraki satira gectigi icin tekrar ayni satira pointeri ayarliyorum
			fwrite(&temp,sizeof(musteri),1,myptr); //ve yazdiriyorum
			
		}
	}
	
	printf("\nGuncelleme islemi basariyla tamamlandi.\n");
}

int main(){
	
	int menu;
	int Sayi;
	int arama;
	
	while(1){
		
	printf("\n------------MENU--------\n1-Yeni Liste(bu islem listeyi sifirlar)\n2-Yeni kullanici girisi\n3-Listeleme\n4-Negatif Bakiyede musteri sayisi\n5-en yuksek bakiyeli kullanici\n6-300'den yuksek bakiyeli kullanicilar icin list.txt olusturma\n7-bakiye %50 arttiginda 300'ü gecen kullanicilari güncelleme\n8-cikis\nislem seciniz [1-8] : ");
	scanf("%d",&menu); //klasik menu
	
		switch(menu){
		
		case 1:
			
			YeniListe();
		
		break;
		
		case 2:
		
			while(1){ //bu dongu icerisinde -1 girilene kadar kayit islemi yapmayi sagliyorum
				
				printf("\nHesap no giriniz [cikis icin -1 giriniz] : ");
				scanf("%d",&arama);
				
				if(arama==-1){ //kullanici cikmak istiyor mu kontrolu
					
					printf("\n");
					break;
					
				}else if(arama<1 || arama>KullaniciSayisi){ //kullanici olmayan bir hesap numarasi girmis mi kontrolu
			
					printf("\nhatali veri girisi.\n\n");
					continue;
			
				}
				
				YeniKullanici(arama);
		
			}
		
		break;
		
		case 3:
		
			Listeleme();
			
		break;
		
		case 4:
				
			Sayi = NegatifBakiyeMusteriSayisi();
			printf("\nNegatif bakiyedeki musteri sayisi : %d\n",Sayi); //sayiyi negatif musteri sayisina esitleyip yazdiriyorum
		
		break;
		
		case 5:
			
			MaxBakiyeyeSahipMusteri();
			
		break;
		
		case 6:
			
			TXTolusturma();
		
		break;
		
		case 7:
			
			KullaniciArttiripGuncelleme();
			
		break;
		
		case 8:
			
			printf("\ncikis gerceklestiriliyor...\n");
			return 0;
		
		break;
		
		default:
			
			printf("\nYanlis giris gerceklestirdiniz.\n");
			
		break;
		
		}	
	}
		
return 0;
}
