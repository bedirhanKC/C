#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Turkish");
	
int ogrenci_sayisi,notlar_toplami,i,j,k,evethayir,oku_numara,oku_biralti,oku_biralti2,gsayisi,ksayisi;
float can_notu,sinif_ort,toplam,N;

j=0;

int giris;


printf("Hoşgeldiniz, Bu sistem, girilen verilen doğrultusunda size bilgi sağlamak amacıyla tasarlanmıştır.\nSisteme bilgi girmeden çalışmayacaktır.\n\n");

asama1:

can_notu=0.0;
sinif_ort=0.0;
toplam=0.0;

int notlar[100][4]; //Bu matris (0=Öğrenci numarası), (1=vize), (2=final) tutmaktadır.
float ortalama[100]; //Bu dizi (0=sene sonu notu) değerlerini tutmaktadır.


printf("Okul numarasının girdiğiniz öğrencinin,Vize notunu ve Final notunu girdikten sonra kayıt işlemi tamamlanacaktır.\n[-1] Verisi girilene kadar kayıt işlemi devam edecektir.\n\n");


numaragirisi:
	
for(ogrenci_sayisi=0;ogrenci_sayisi!=-1;ogrenci_sayisi++){

donguicinumara:	
printf("%d. öğrenci numarasını giriniz:",ogrenci_sayisi+1); ////
scanf("%d",&notlar[ogrenci_sayisi][0]); //Öğrenci numarasını alıyorum

for(j=0;j<ogrenci_sayisi;j++){
	if(notlar[ogrenci_sayisi][0]==notlar[j][0]){
		printf("\nGirmiş olduğunuz öğrenci numarasının girişi daha önceden gerçekleştirdiniz.Tekrar numara girişine yönlendiriliyorsunuz...\n");
		goto donguicinumara;
	}
}

	if(notlar[ogrenci_sayisi][0]==-1){ //girilen sayı -1 mi diye kontrol ediyorum
	
		if(ogrenci_sayisi==0){
			printf("\n\nHiç bir öğrenci girişi gerçekleştirilmediği için,Çıkışa yönlendiriliyorsunuz..."); //hiç öğrenci kaydı yapılmamışsa sistemi kapatıyorum burda
			goto cikis;
		}else if(ogrenci_sayisi==1){
evthyr1:	printf("\n\n1 öğrencinin verisi girildi, devam etmek istiyor musunuz?[1-evet || 2-hayır]:");  //burda da 1 öğrenci kaydedilmiş ve sonraki aşamaya geçmek istiyor
			scanf(" %d",&evethayir);												  //devam etmek istiyor musunuz yoksa bir daha bilgi gircen mi diye soruom
			if(evethayir==1){
				printf("\nDevam etmek istediğiniz belirttiniz. Bilgi alma aşamasına yönlendiriliyorsunuz...\n\n");//1 kayıtla devam etmek istiyomuş, aşama 2ye atıyoruz
				goto asama2;
			}else if(evethayir==2){			
				printf("\nYeniden giriş yapmak istediğinizi belirttiniz.Tekrar Bilgi girişi aşamasına yönlendiriliyorsunuz...\n\n"); //tekrar giriş yapması için en başa atıyoruz, her veri sıfırlanıyor.
				goto asama1;
			}else{
				printf("\n\n");
				goto evthyr1;
			}		
		}else if(ogrenci_sayisi>1 && ogrenci_sayisi<5){
evthyr2:	printf("\n\n5'den az öğrenci verisi girildi, devam etmek istiyor musunuz?[1-evet || 2-hayır]:");  //burda da 5den az öğrenci sayısı var devam etmek istiyo mu diye bakıyoz
			scanf(" %d",&evethayir);												  
			if(evethayir==1){
				printf("\nDevam etmek istediğiniz belirttiniz. Bilgi alma aşamasına yönlendiriliyorsunuz...\n\n");//devam etmek istiyomuş, aşama 2ye atıyoruz
				goto asama2;
			}else if(evethayir==2){
				printf("Yeniden giriş yapmak istediğinizi belirttiniz.Tekrar Bilgi girişi aşamasına yönlendiriliyorsunuz...\n\n"); //tekrar giriş yapması için en başa atıyoruz, her veri sıfırlanıyor.
				goto asama1;
			}else{
				printf("\n\n");
				goto evthyr2;
			}			
		}
		
		
		printf("\n\n-1 girdiniz. Bilgi alma aşamasına yönlendiriliyorsunuz...\n\n"); //bilgi girişi aşaması tamamlanıyor. aşama 2ye yolluyorum.
		goto asama2;}
		
	if(notlar[ogrenci_sayisi][0]<0 || notlar[ogrenci_sayisi][0]>2147483646){
		printf("\nYanlış öğrenci numarası girdiniz.Tekrar numara girişine yönlendiriliyorsunuz...\n\n");
		goto donguicinumara;
	}
	
vizegiris:	printf("\n%d numaralı öğrencinin Vize notunu giriniz:",notlar[ogrenci_sayisi][0]);
	scanf("%d",&notlar[ogrenci_sayisi][1]); //Vize notunu alıyorum
	
	if(notlar[ogrenci_sayisi][1]<0 || notlar[ogrenci_sayisi][1]>100){	//Vize 0-100 arası mı diye kontrol ediyoruz
		printf("\n");						
		goto vizegiris;
	}
	
finalgiris:	printf("\n%d numaralı öğrencinin Final notunu giriniz:",notlar[ogrenci_sayisi][0]);
	scanf("%d",&notlar[ogrenci_sayisi][2]); //Final notunu alıyorum	
	
	if(notlar[ogrenci_sayisi][2]<0 || notlar[ogrenci_sayisi][2]>100){	//Vize 0-100 arası mı diye kontrol ediyoruz
		printf("\n");
		goto finalgiris;
	}
	
	ortalama[ogrenci_sayisi]=(float)(notlar[ogrenci_sayisi][2]+notlar[ogrenci_sayisi][1])/2.0;	//öğrencinin vize ve finali ortalamasını hesaplıyoruz.
	toplam=toplam+ortalama[ogrenci_sayisi];
	
	
	printf("\n------------------Kayıt Gerçekleştirilmiştir------------------\n\n ");
		
	}
asama2:
	


	sinif_ort=toplam/ogrenci_sayisi;	//Sınıf ortalamasını buluyoruz
	
	if(sinif_ort<=35.0){
		can_notu=35.0;			//Çan notunu buluyoruz
	}else{
		can_notu=sinif_ort;
	}
	
	
	printf("\nAŞAMA 2\n\n");	
anasecim:    printf("sınıf ile ilgili yapılabilir işlemleri görüntülemek için 1'i\nNumarası girilen öğrenci hakkında bilgi almak için 2'yi tuşlayınız.\n[1-2]:"); //aşama 2 
    
   scanf("%d",&giris); //hangi seçenek sorusu




    switch(giris){
    	
    	case 1:
kucukgiris1:
	
			oku_biralti2=0;
			oku_biralti=0;
			printf("\nÖğrenci sayısı öğrenmek için 1'i\nSınıf ortalaması öğrenmek için 2'yi\nÇan notunu öğrenmek için 3'ü\nGeçti Geçmedi listesini görmek için 4'ü,\nGeçti Geçmedi sayısını öğrenmek için 5'i\nGirilen değer kadar çan notuna uzaklığa sahip öğrencileri görmek için 6'yı tuşlayınız.\n[1-6]:");
			scanf("%d",&oku_biralti); // sınıf menüsünden seçim yaptırıyoruz
			
				switch(oku_biralti){
					
					case 1: // öğrenci sayisi seçimi
						printf("\nÖğrenci sayisi : %d\n",ogrenci_sayisi);
						
						
						
						printf("\nSınıf ile ilgili işlemler menüsüne dönmek için 1'i,\nTüm bilgileri sıfırlayıp ana menüye dönmek için 2'yi tuşlayınız.\nAksi bir tuş çıkışa yönlendirecektir:");
						scanf("%d",&oku_biralti2);
						
						
						switch(oku_biralti2){
    						case 1:
    							printf("\nSınıf ile ilgili işlem mesünüsüne yönlendiriliyorsunuz...\n"); //çıkış menüsü-sınıfla ilgili işlemlere dönme
								goto kucukgiris1;
							break;

							case 2:
								printf("\nBilgiler sıfırlandı.Ana menüye yönlendiriliyorsunuz...\n");	// çıkış menüsü - en başa dönme
								goto asama1;
							break;
				
							default:
								printf("\nSistem kapatılıyor...\n"); //çıkış menüsü, sistemi kapatma
								return 0;
							break;							
							}
					break;
					
					case 2: 
						printf("\nSınıf ortalaması : %.2f\n",sinif_ort);
					
						printf("\nSınıf ile ilgili işlemler menüsüne dönmek için 1'i,\nTüm bilgileri sıfırlayıp ana menüye dönmek için 2'yi tuşlayınız.\nAksi bir tuş çıkışa yönlendirecektir:");
						scanf("%d",&oku_biralti2);
						
						
						switch(oku_biralti2){
    						case 1:
    							printf("\nSınıf ile ilgili işlem mesünüsüne yönlendiriliyorsunuz...\n"); //çıkış menüsü-sınıfla ilgili işlemlere dönme
								goto kucukgiris1;
							break;

							case 2:
								printf("\nBilgiler sıfırlandı.Ana menüye yönlendiriliyorsunuz...\n");	// çıkış menüsü - en başa dönme
								goto asama1;
							break;
				
							default:
								printf("\nSistem kapatılıyor...\n"); //çıkış menüsü, sistemi kapatma
								return 0;
							break;							
							}
					break;	
					
					case 3: //çan notu seçimi
						printf("\nÇan notu : %.2f\n",can_notu);
					
						printf("\nSınıf ile ilgili işlemler menüsüne dönmek için 1'i,\nTüm bilgileri sıfırlayıp ana menüye dönmek için 2'yi tuşlayınız.\nAksi bir tuş çıkışa yönlendirecektir:");
						scanf("%d",&oku_biralti2);
						
						
						switch(oku_biralti2){
    						case 1:
    							printf("\nSınıf ile ilgili işlem mesünüsüne yönlendiriliyorsunuz...\n"); //çıkış menüsü-sınıfla ilgili işlemlere dönme
								goto kucukgiris1;
							break;

							case 2:
								printf("\nBilgiler sıfırlandı.Ana menüye yönlendiriliyorsunuz...\n");	// çıkış menüsü - en başa dönme
								goto asama1;
							break;
				
							default:
								printf("\nSistem kapatılıyor...\n"); //çıkış menüsü, sistemi kapatma
								return 0;
							break;							
							}
					break;
												
    				case 4: //geçti geçmedi listesi
						
						
						for(k=0;k<ogrenci_sayisi;k++){
						printf("\n%d numaralı öğrencinin Vize notu:%d  Final notu:%d\tOrtalaması:%.2f  Sınıf çan notu:%.2f  Durumu:",notlar[k][0],notlar[k][1],notlar[k][2],ortalama[k],can_notu);
    					if(ortalama[k]>=can_notu){
    						printf(" Geçti");
						}else{							//Geçti kaldı kontrolü
							printf(" Kaldı");
						}	
						}
						printf("\n");
						
					
						printf("\nSınıf ile ilgili işlemler menüsüne dönmek için 1'i,\nTüm bilgileri sıfırlayıp ana menüye dönmek için 2'yi tuşlayınız.\nAksi bir tuş çıkışa yönlendirecektir:");
						scanf("%d",&oku_biralti2);
						
						
						switch(oku_biralti2){
    						case 1:
    							printf("\nSınıf ile ilgili işlem mesünüsüne yönlendiriliyorsunuz...\n"); //çıkış menüsü-sınıfla ilgili işlemlere dönme
								goto kucukgiris1;
							break;

							case 2:
								printf("\nBilgiler sıfırlandı.Ana menüye yönlendiriliyorsunuz...\n");	// çıkış menüsü - en başa dönme
								goto asama1;
							break;
				
							default:
								printf("\nSistem kapatılıyor...\n"); //çıkış menüsü, sistemi kapatma
								return 0;
							break;							
							}
					break;
					
					case 5: //geçti geçmedi sayısı
						
						gsayisi=0;ksayisi=0; //geçti kaldı sayısını 0'a eşitliyorum
						
						for(k=0;k<ogrenci_sayisi;k++){ //geçti kaldı sayısını alıyorum
						
							if(ortalama[k]>=can_notu){
								gsayisi++;
							}else{
								ksayisi++;
							}
							
						}
						printf("\nGeçti sayısı:%d\nKaldı sayısı:%d\n",gsayisi,ksayisi);
						
					
						printf("\nSınıf ile ilgili işlemler menüsüne dönmek için 1'i,\nTüm bilgileri sıfırlayıp ana menüye dönmek için 2'yi tuşlayınız.\nAksi bir tuş çıkışa yönlendirecektir:");
						scanf("%d",&oku_biralti2);
						
						
						switch(oku_biralti2){
    						case 1:
    							printf("\nSınıf ile ilgili işlem mesünüsüne yönlendiriliyorsunuz...\n"); //çıkış menüsü-sınıfla ilgili işlemlere dönme
								goto kucukgiris1;
							break;

							case 2:
								printf("\nBilgiler sıfırlandı.Ana menüye yönlendiriliyorsunuz...\n");	// çıkış menüsü - en başa dönme
								goto asama1;
							break;
				
							default:
								printf("\nSistem kapatılıyor...\n"); //çıkış menüsü, sistemi kapatma
								return 0;
							break;							
							}
					break;
					
					case 6: //n kadar uzaklık muhabbeti
					
						printf("\nPuanıyla çan notu arasında, girilen N değeri kadar fark olan öğrencileri listemek için,\nBir N değeri giriniz: ");
						scanf("%f",&N);
												
						for(k=0;k<ogrenci_sayisi;k++){ //geçti kaldı sayısını alıyorum
						
						if(can_notu-ortalama[k]<=N && can_notu-ortalama[k]>0){
							printf("\n%d Numaralı öğrencinin %2.f puana ihtiyacı var.(Şuanki notu:%2.f)",notlar[k][0],can_notu-ortalama[k],ortalama[k]);
						}
						}
						printf("\n");
						
					
						printf("\nSınıf ile ilgili işlemler menüsüne dönmek için 1'i,\nTüm bilgileri sıfırlayıp ana menüye dönmek için 2'yi tuşlayınız.\nAksi bir tuş çıkışa yönlendirecektir:");
						scanf("%d",&oku_biralti2);
						
						
						switch(oku_biralti2){
    						case 1:
    							printf("\nSınıf ile ilgili işlem mesünüsüne yönlendiriliyorsunuz...\n"); //çıkış menüsü-sınıfla ilgili işlemlere dönme
								goto kucukgiris1;
							break;

							case 2:
								printf("\nBilgiler sıfırlandı.Ana menüye yönlendiriliyorsunuz...\n");	// çıkış menüsü - en başa dönme
								goto asama1;
							break;
				
							default:
								printf("\nSistem kapatılıyor...\n"); //çıkış menüsü, sistemi kapatma
								return 0;
							break;							
							}
					break;
					
					}
    	
    	case 2:
kucukgiris2:
			j=0;
			printf("\nBilgilerini görmek istediğiniz öğrencinin numarasını giriniz:");	//öğrenci numarası alıyoruz, bilgileri göstermek için
    		scanf("%d",&oku_numara);

			if(oku_numara<0 || oku_numara>2147483646){
				printf("\nYanlış öğrenci numarası girdiniz.Tekrar numara girişine yönlendiriliyorsunuz...\n");    //girilen öğrenci numarası adam akıllı bi sayı mı diye kontrol ediyozz
				goto kucukgiris2;	
			}    		
    		
    		for(i=0;i<ogrenci_sayisi;i++){
    			if(oku_numara==notlar[i][0]){
    				
    				j=31;										//Bu aşamada öğrenci bilgilerinin çıktısını yazıyor
    				printf("\n%d numaralı öğrencinin;\nVize notu:%d\nFinal notu:%d\nOrtalaması:%.2f\nSınıf çan notu:%.2f\nDurumu:",notlar[i][0],notlar[i][1],notlar[i][2],ortalama[i],can_notu);
    					if(ortalama[i]>=can_notu){
    						printf(" Geçti\n");
						}else{							//Geçti kaldı kontrolü
							printf(" Kaldı\n");
						}

				}
			}
			if(j!=31){
				printf("\nGirmiş olduğunuz numara için herhangi bir not kaydı yapılmamıştır.\nTekrar numara girişine yönlendiriliyorsunuz...\n");
				goto kucukgiris2; //böyle bi numara yok knk çıktısı verip bir daha numara girmesi için zorluyoruz. seve seve girecek aslanım
				
			}
			
			printf("\nSınıf ile ilgili işlem mesünüse dönmek için 1'i,\nTekrar numara girişi için 2'yi,\nGirilmiş bilgileri sıfırlayıp tekrardan ana menüye dönmek için 3'ü tuşlayın\nAksi bir tuş sistemi kapatacaktır : ");
    		scanf("%d",&giris);    //Burdan itibaren son işaretli mavi yere kadar çıkış menüsü diyorum. 
    		
    		switch(giris){
    			case 1:
    			printf("\nSınıf ile ilgili işlem mesünüsüne yönlendiriliyorsunuz...\n"); //çıkış menüsü-sınıfla ilgili işlemlere dönme
				goto kucukgiris1;
				break;
				
				case 2:
				printf("\nTekrar numara girişine yönlendiriliyorsunuz...\n");		//çıkış menüsü- tekrar numara girişi yapma
				goto kucukgiris2;
				break;
				
				case 3:
				printf("\nBilgiler sıfırlandı.Ana menüye yönlendiriliyorsunuz...\n");	// çıkış menüsü - en başa dönme
				goto asama1;
				break;
				
				default:
				printf("\nSistem kapatılıyor...\n"); //çıkış menüsü, sistemi kapatma
				return 0;
				break;	
			}
    		
    		
    	break;
    	
    	default:
    		goto anasecim; // sınıfla ya da öğrenci numarasıyla işlem yapma seçeneğinde başka bi şey seçmiş bi daha atıyorum oraya hiç bi şey söylemeden. kendi anlasın bi zahmet
    		printf("\n\n");
    	break;}
    	
	

cikis: return 0; }
