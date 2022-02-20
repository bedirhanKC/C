#include<stdio.h>
#include<math.h>
#include<locale.h>

int menu2(){
	
	int oku_biralti2;
	
	printf("\nSýnýf ile ilgili iþlemler menüsüne dönmek için 1'i,\nTüm bilgileri sýfýrlayýp ana menüye dönmek için 2'yi tuþlayýnýz.\nAksi bir tuþ çýkýþa yönlendirecektir:");
						scanf("%d",&oku_biralti2);
						
						
						switch(oku_biralti2){
    						case 1:
    							printf("\nSýnýf ile ilgili iþlem mesünüsüne yönlendiriliyorsunuz...\n"); //çýkýþ menüsü-sýnýfla ilgili iþlemlere dönme
								goto kucukgiris1;
							break;

							case 2:
								printf("\nBilgiler sýfýrlandý.Ana menüye yönlendiriliyorsunuz...\n");	// çýkýþ menüsü - en baþa dönme
								goto asama1;
							break;
				
							default:
								printf("\nSistem kapatýlýyor...\n"); //çýkýþ menüsü, sistemi kapatma
								return 0;
							break;							
					 		}
}

int main(){
setlocale(LC_ALL,"Turkish");
	
int ogrenci_sayisi,notlar_toplami,i,j,k,evethayir,oku_numara,oku_biralti,oku_biralti2,gsayisi,ksayisi;
float can_notu,sinif_ort,toplam,N;

j=0;

int giris;


printf("Hoþgeldiniz, Bu sistem, girilen verilen doðrultusunda size bilgi saðlamak amacýyla tasarlanmýþtýr.\nSisteme bilgi girmeden çalýþmayacaktýr.\n\n");

asama1:

can_notu=0.0;
sinif_ort=0.0;
toplam=0.0;

int notlar[100][4]; //Bu matris (0=Öðrenci numarasý), (1=vize), (2=final) tutmaktadýr.
float ortalama[100]; //Bu dizi (0=sene sonu notu) deðerlerini tutmaktadýr.


printf("Okul numarasýnýn girdiðiniz öðrencinin,Vize notunu ve Final notunu girdikten sonra kayýt iþlemi tamamlanacaktýr.\n[-1] Verisi girilene kadar kayýt iþlemi devam edecektir.\n\n");


numaragirisi:
	
for(ogrenci_sayisi=0;ogrenci_sayisi!=-1;ogrenci_sayisi++){

donguicinumara:	
printf("%d. öðrenci numarasýný giriniz:",ogrenci_sayisi+1); ////
scanf("%d",&notlar[ogrenci_sayisi][0]); //Öðrenci numarasýný alýyorum

for(j=0;j<ogrenci_sayisi;j++){
	if(notlar[ogrenci_sayisi][0]==notlar[j][0]){
		printf("\nGirmiþ olduðunuz öðrenci numarasýnýn giriþi daha önceden gerçekleþtirdiniz.Tekrar numara giriþine yönlendiriliyorsunuz...\n");
		goto donguicinumara;
	}
}

	if(notlar[ogrenci_sayisi][0]==-1){ //girilen sayý -1 mi diye kontrol ediyorum
	
		if(ogrenci_sayisi==0){
			printf("\n\nHiç bir öðrenci giriþi gerçekleþtirilmediði için,Çýkýþa yönlendiriliyorsunuz..."); //hiç öðrenci kaydý yapýlmamýþsa sistemi kapatýyorum burda
			goto cikis;
		}else if(ogrenci_sayisi==1){
evthyr1:	printf("\n\n1 öðrencinin verisi girildi, devam etmek istiyor musunuz?[1-evet || 2-hayýr]:");  //burda da 1 öðrenci kaydedilmiþ ve sonraki aþamaya geçmek istiyor
			scanf(" %d",&evethayir);												  //devam etmek istiyor musunuz yoksa bir daha bilgi gircen mi diye soruom
			if(evethayir==1){
				printf("\nDevam etmek istediðiniz belirttiniz. Bilgi alma aþamasýna yönlendiriliyorsunuz...\n\n");//1 kayýtla devam etmek istiyomuþ, aþama 2ye atýyoruz
				goto asama2;
			}else if(evethayir==2){			
				printf("\nYeniden giriþ yapmak istediðinizi belirttiniz.Tekrar Bilgi giriþi aþamasýna yönlendiriliyorsunuz...\n\n"); //tekrar giriþ yapmasý için en baþa atýyoruz, her veri sýfýrlanýyor.
				goto asama1;
			}else{
				printf("\n\n");
				goto evthyr1;
			}		
		}else if(ogrenci_sayisi>1 && ogrenci_sayisi<5){
evthyr2:	printf("\n\n5'den az öðrenci verisi girildi, devam etmek istiyor musunuz?[1-evet || 2-hayýr]:");  //burda da 5den az öðrenci sayýsý var devam etmek istiyo mu diye bakýyoz
			scanf(" %d",&evethayir);												  
			if(evethayir==1){
				printf("\nDevam etmek istediðiniz belirttiniz. Bilgi alma aþamasýna yönlendiriliyorsunuz...\n\n");//devam etmek istiyomuþ, aþama 2ye atýyoruz
				goto asama2;
			}else if(evethayir==2){
				printf("Yeniden giriþ yapmak istediðinizi belirttiniz.Tekrar Bilgi giriþi aþamasýna yönlendiriliyorsunuz...\n\n"); //tekrar giriþ yapmasý için en baþa atýyoruz, her veri sýfýrlanýyor.
				goto asama1;
			}else{
				printf("\n\n");
				goto evthyr2;
			}			
		}
		
		
		printf("\n\n-1 girdiniz. Bilgi alma aþamasýna yönlendiriliyorsunuz...\n\n"); //bilgi giriþi aþamasý tamamlanýyor. aþama 2ye yolluyorum.
		goto asama2;}
		
	if(notlar[ogrenci_sayisi][0]<0 || notlar[ogrenci_sayisi][0]>2147483646){
		printf("\nYanlýþ öðrenci numarasý girdiniz.Tekrar numara giriþine yönlendiriliyorsunuz...\n\n");
		goto donguicinumara;
	}
	
vizegiris:	printf("\n%d numaralý öðrencinin Vize notunu giriniz:",notlar[ogrenci_sayisi][0]);
	scanf("%d",&notlar[ogrenci_sayisi][1]); //Vize notunu alýyorum
	
	if(notlar[ogrenci_sayisi][1]<0 || notlar[ogrenci_sayisi][1]>100){	//Vize 0-100 arasý mý diye kontrol ediyoruz
		printf("\n");						
		goto vizegiris;
	}
	
finalgiris:	printf("\n%d numaralý öðrencinin Final notunu giriniz:",notlar[ogrenci_sayisi][0]);
	scanf("%d",&notlar[ogrenci_sayisi][2]); //Final notunu alýyorum	
	
	if(notlar[ogrenci_sayisi][2]<0 || notlar[ogrenci_sayisi][2]>100){	//Vize 0-100 arasý mý diye kontrol ediyoruz
		printf("\n");
		goto finalgiris;
	}
	
	ortalama[ogrenci_sayisi]=(float)(notlar[ogrenci_sayisi][2]+notlar[ogrenci_sayisi][1])/2.0;	//öðrencinin vize ve finali ortalamasýný hesaplýyoruz.
	toplam=toplam+ortalama[ogrenci_sayisi];
	
	
	printf("\n------------------Kayýt Gerçekleþtirilmiþtir------------------\n\n ");
		
	}
asama2:
	


	sinif_ort=toplam/ogrenci_sayisi;	//Sýnýf ortalamasýný buluyoruz
	
	if(sinif_ort<=35.0){
		can_notu=35.0;			//Çan notunu buluyoruz
	}else{
		can_notu=sinif_ort;
	}
	
	
	printf("\nAÞAMA 2\n\n");	
anasecim:    printf("sýnýf ile ilgili yapýlabilir iþlemleri görüntülemek için 1'i\nNumarasý girilen öðrenci hakkýnda bilgi almak için 2'yi tuþlayýnýz.\n[1-2]:"); //aþama 2 
    
   scanf("%d",&giris); //hangi seçenek sorusu




    switch(giris){
    	
    	case 1:
kucukgiris1:
	
			oku_biralti2=0;
			oku_biralti=0;
			printf("\nÖðrenci sayýsý öðrenmek için 1'i\nSýnýf ortalamasý öðrenmek için 2'yi\nÇan notunu öðrenmek için 3'ü\nGeçti Geçmedi listesini görmek için 4'ü,\nGeçti Geçmedi sayýsýný öðrenmek için 5'i\nGirilen deðer kadar çan notuna uzaklýða sahip öðrencileri görmek için 6'yý tuþlayýnýz.\n[1-6]:");
			scanf("%d",&oku_biralti); // sýnýf menüsünden seçim yaptýrýyoruz
			
				switch(oku_biralti){
					
					case 1: // öðrenci sayisi seçimi
						printf("\nÖðrenci sayisi : %d\n",ogrenci_sayisi);
												
						menu2();
					break;
					
					case 2: 
						printf("\nSýnýf ortalamasý : %.2f\n",sinif_ort);
					
						menu2();
					break;	
					
					case 3: //çan notu seçimi
						printf("\nÇan notu : %.2f\n",can_notu);
					
						menu2();
					break;
												
    				case 4: //geçti geçmedi listesi
						
						
						for(k=0;k<ogrenci_sayisi;k++){
						printf("\n%d numaralý öðrencinin Vize notu:%d  Final notu:%d\tOrtalamasý:%.2f  Sýnýf çan notu:%.2f  Durumu:",notlar[k][0],notlar[k][1],notlar[k][2],ortalama[k],can_notu);
    					if(ortalama[k]>=can_notu){
    						printf(" Geçti");
						}else{							//Geçti kaldý kontrolü
							printf(" Kaldý");
						}	
						}
						printf("\n");
						
					
						menu2();							
							}
					break;
					
					case 5: //geçti geçmedi sayýsý
						
						gsayisi=0;ksayisi=0; //geçti kaldý sayýsýný 0'a eþitliyorum
						
						for(k=0;k<ogrenci_sayisi;k++){ //geçti kaldý sayýsýný alýyorum
						
							if(ortalama[k]>=can_notu){
								gsayisi++;
							}else{
								ksayisi++;
							}
							
						}
						printf("\nGeçti sayýsý:%d\nKaldý sayýsý:%d\n",gsayisi,ksayisi);
						
					
						menu2();
					break;
					
					case 6: //n kadar uzaklýk muhabbeti
					
						printf("\nPuanýyla çan notu arasýnda, girilen N deðeri kadar fark olan öðrencileri listemek için,\nBir N deðeri giriniz: ");
						scanf("%f",&N);
												
						for(k=0;k<ogrenci_sayisi;k++){ //geçti kaldý sayýsýný alýyorum
						
						if(can_notu-ortalama[k]<=N && can_notu-ortalama[k]>0){
							printf("\n%d Numaralý öðrencinin %2.f puana ihtiyacý var.(Þuanki notu:%2.f)",notlar[k][0],can_notu-ortalama[k],ortalama[k]);
						}
						}
						printf("\n");
						
					
					menu2();
					break;
					
					}
    	
    	case 2:
kucukgiris2:
			j=0;
			printf("\nBilgilerini görmek istediðiniz öðrencinin numarasýný giriniz:");	//öðrenci numarasý alýyoruz, bilgileri göstermek için
    		scanf("%d",&oku_numara);

			if(oku_numara<0 || oku_numara>2147483646){
				printf("\nYanlýþ öðrenci numarasý girdiniz.Tekrar numara giriþine yönlendiriliyorsunuz...\n");    //girilen öðrenci numarasý adam akýllý bi sayý mý diye kontrol ediyozz
				goto kucukgiris2;	
			}    		
    		
    		for(i=0;i<ogrenci_sayisi;i++){
    			if(oku_numara==notlar[i][0]){
    				
    				j=31;										//Bu aþamada öðrenci bilgilerinin çýktýsýný yazýyor
    				printf("\n%d numaralý öðrencinin;\nVize notu:%d\nFinal notu:%d\nOrtalamasý:%.2f\nSýnýf çan notu:%.2f\nDurumu:",notlar[i][0],notlar[i][1],notlar[i][2],ortalama[i],can_notu);
    					if(ortalama[i]>=can_notu){
    						printf(" Geçti\n");
						}else{							//Geçti kaldý kontrolü
							printf(" Kaldý\n");
						}

				}
			}
			if(j!=31){
				printf("\nGirmiþ olduðunuz numara için herhangi bir not kaydý yapýlmamýþtýr.\nTekrar numara giriþine yönlendiriliyorsunuz...\n");
				goto kucukgiris2; //böyle bi numara yok knk çýktýsý verip bir daha numara girmesi için zorluyoruz. seve seve girecek aslaným
				
			}
			
			printf("\nSýnýf ile ilgili iþlem mesünüse dönmek için 1'i,\nTekrar numara giriþi için 2'yi,\nGirilmiþ bilgileri sýfýrlayýp tekrardan ana menüye dönmek için 3'ü tuþlayýn\nAksi bir tuþ sistemi kapatacaktýr : ");
    		scanf("%d",&giris);    //Burdan itibaren son iþaretli mavi yere kadar çýkýþ menüsü diyorum. 
    		
    		switch(giris){
    			case 1:
    			printf("\nSýnýf ile ilgili iþlem mesünüsüne yönlendiriliyorsunuz...\n"); //çýkýþ menüsü-sýnýfla ilgili iþlemlere dönme
				goto kucukgiris1;
				break;
				
				case 2:
				printf("\nTekrar numara giriþine yönlendiriliyorsunuz...\n");		//çýkýþ menüsü- tekrar numara giriþi yapma
				goto kucukgiris2;
				break;
				
				case 3:
				printf("\nBilgiler sýfýrlandý.Ana menüye yönlendiriliyorsunuz...\n");	// çýkýþ menüsü - en baþa dönme
				goto asama1;
				break;
				
				default:
				printf("\nSistem kapatýlýyor...\n"); //çýkýþ menüsü, sistemi kapatma
				return 0;
				break;	
			}
    		
    		
    	break;
    	
    	default:
    		goto anasecim; // sýnýfla ya da öðrenci numarasýyla iþlem yapma seçeneðinde baþka bi þey seçmiþ bi daha atýyorum oraya hiç bi þey söylemeden. kendi anlasýn bi zahmet
    		printf("\n\n");
    	break;}
    	
	
    

	

cikis: return 0; }
