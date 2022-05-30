/*
Bedirhan Kömürcü
26.05.2022
19.24
*/

#include<stdlib.h>
#include<stdio.h>

struct musteri{
	
	int kontrol;
	int HesapNo;
	char isim[30];
	char soyisim[30];
	float bakiye;
	
	
};

typedef struct musteri musteri;

void YeniListe(){
	
	FILE *myptr;
	musteri temp={1,0,"","",0.0};
	
	myptr=fopen("Banka.dat","w");
	
	int i ;
	
	for(i=1;i<21;i++){
		
		temp.HesapNo=i;
		
		fwrite(&temp,sizeof(musteri),1,myptr);
		
	}
	
	fclose(myptr);
	
	printf("\nislem basariyla tamamlandi.\n");
	
}

void YeniKullanici(){
	
	FILE *myptr;
	musteri temp;
	
	myptr=fopen("Banka.dat","r+");
	
	int arama;
	char bugfix[3];
	
	while(1){
		
		printf("Hesap no giriniz [cikis icin -1 giriniz] : ");
		scanf("%d",&arama);
		
		if(arama==-1)break;
		
		else if(arama<1 || arama>20){
			
			printf("\nhatali veri girisi.\n\n");
			continue;
			
		}
		
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

void Listeleme(){
	
	FILE *myptr;
	musteri temp;
	
	myptr=fopen("Banka.dat","r");
	
	int i ;
	
	printf("\n---------LIST------------\n");
	
	for(i=1;i<21;i++){
		
		fread(&temp,sizeof(musteri),1,myptr);
		
		if(temp.kontrol==1){
			
			printf("%d \n",temp.HesapNo);
			
		}else{
			
			printf("%d %s %s %.2f \n",temp.HesapNo,temp.isim,temp.soyisim,temp.bakiye);
			
		}
		
		
	}
	
	fclose(myptr);
	
}

int NegatifBakiyeMusteriSayisi(){
	
	FILE *myptr;
	musteri temp;
	int sayi=0;
	
	myptr=fopen("Banka.dat","r");
	
	int i ;
	
	for(i=1;i<21;i++){
		
		fread(&temp,sizeof(musteri),1,myptr);
		
		if(temp.kontrol==0 && temp.bakiye<0 ) sayi++;
	}
	
	return sayi;
	
	fclose(myptr);
	
}

void MaxBakiyeyeSahipMusteri(){
	
	FILE *myptr;
	musteri temp,max;
	int MaxNo;
	
	myptr=fopen("Banka.dat","r");
	
	int i;
	int sayac=0;
	
	for(i=1;i<21;i++){
		
		fread(&temp,sizeof(musteri),1,myptr);
		
		if(temp.kontrol==0 && sayac==0){
			
			max=temp;
   sayac++;
			
		}else if(temp.kontrol==0 && temp.bakiye>max.bakiye ){
			
			max=temp;
			
		}
	}
	
	printf("\nEn yuksek bakiyeye sahip kullanici ;\n%d %s %s %.2f",max.HesapNo,max.isim,max.soyisim,max.bakiye);
	
	fclose(myptr);
	
}

int main(){
	
	int menu;
	int Sayi;
	
	while(1){
		
	printf("1-Yeni Liste(bu islem listeyi sifirlar)\n2-Yeni kullanici girisi\n3-Listeleme\n4-Negatif Bakiyede musteri sayisi\n5-en yuksek bakiyeli kullanici\n6-cikis\nislem seciniz [1-4] : ");
	scanf("%d",&menu);
	
	switch(menu){
		
		case 1:
			
			YeniListe();
		
		break;
		
		case 2:
		
			YeniKullanici();
		
		break;
		
		case 3:
		
			Listeleme();
			
		break;
		
		case 4:
			
			
			Sayi = NegatifBakiyeMusteriSayisi();
			printf("\nNegatif bakiyedeki musteri sayisi : %d",Sayi);
		
		break;
		
		case 5:
			
			MaxBakiyeyeSahipMusteri();
			
		break;
		
		case 6:
			
			printf("\ncikis gerceklestiriliyor...\n");
			return 0;
		
		break;
		
		default:
			
			printf("\nYanlis giris gerceklestirdiniz.\n");
			
		break;
		
	}
	
		
	}
}
