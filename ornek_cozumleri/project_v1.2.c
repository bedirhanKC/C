#include<stdio.h>
#include<math.h>
#include<locale.h>

int menu2(){
	
	int oku_biralti2;
	
	printf("\nS�n�f ile ilgili i�lemler men�s�ne d�nmek i�in 1'i,\nT�m bilgileri s�f�rlay�p ana men�ye d�nmek i�in 2'yi tu�lay�n�z.\nAksi bir tu� ��k��a y�nlendirecektir:");
						scanf("%d",&oku_biralti2);
						
						
						switch(oku_biralti2){
    						case 1:
    							printf("\nS�n�f ile ilgili i�lem mes�n�s�ne y�nlendiriliyorsunuz...\n"); //��k�� men�s�-s�n�fla ilgili i�lemlere d�nme
								goto kucukgiris1;
							break;

							case 2:
								printf("\nBilgiler s�f�rland�.Ana men�ye y�nlendiriliyorsunuz...\n");	// ��k�� men�s� - en ba�a d�nme
								goto asama1;
							break;
				
							default:
								printf("\nSistem kapat�l�yor...\n"); //��k�� men�s�, sistemi kapatma
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


printf("Ho�geldiniz, Bu sistem, girilen verilen do�rultusunda size bilgi sa�lamak amac�yla tasarlanm��t�r.\nSisteme bilgi girmeden �al��mayacakt�r.\n\n");

asama1:

can_notu=0.0;
sinif_ort=0.0;
toplam=0.0;

int notlar[100][4]; //Bu matris (0=��renci numaras�), (1=vize), (2=final) tutmaktad�r.
float ortalama[100]; //Bu dizi (0=sene sonu notu) de�erlerini tutmaktad�r.


printf("Okul numaras�n�n girdi�iniz ��rencinin,Vize notunu ve Final notunu girdikten sonra kay�t i�lemi tamamlanacakt�r.\n[-1] Verisi girilene kadar kay�t i�lemi devam edecektir.\n\n");


numaragirisi:
	
for(ogrenci_sayisi=0;ogrenci_sayisi!=-1;ogrenci_sayisi++){

donguicinumara:	
printf("%d. ��renci numaras�n� giriniz:",ogrenci_sayisi+1); ////
scanf("%d",&notlar[ogrenci_sayisi][0]); //��renci numaras�n� al�yorum

for(j=0;j<ogrenci_sayisi;j++){
	if(notlar[ogrenci_sayisi][0]==notlar[j][0]){
		printf("\nGirmi� oldu�unuz ��renci numaras�n�n giri�i daha �nceden ger�ekle�tirdiniz.Tekrar numara giri�ine y�nlendiriliyorsunuz...\n");
		goto donguicinumara;
	}
}

	if(notlar[ogrenci_sayisi][0]==-1){ //girilen say� -1 mi diye kontrol ediyorum
	
		if(ogrenci_sayisi==0){
			printf("\n\nHi� bir ��renci giri�i ger�ekle�tirilmedi�i i�in,��k��a y�nlendiriliyorsunuz..."); //hi� ��renci kayd� yap�lmam��sa sistemi kapat�yorum burda
			goto cikis;
		}else if(ogrenci_sayisi==1){
evthyr1:	printf("\n\n1 ��rencinin verisi girildi, devam etmek istiyor musunuz?[1-evet || 2-hay�r]:");  //burda da 1 ��renci kaydedilmi� ve sonraki a�amaya ge�mek istiyor
			scanf(" %d",&evethayir);												  //devam etmek istiyor musunuz yoksa bir daha bilgi gircen mi diye soruom
			if(evethayir==1){
				printf("\nDevam etmek istedi�iniz belirttiniz. Bilgi alma a�amas�na y�nlendiriliyorsunuz...\n\n");//1 kay�tla devam etmek istiyomu�, a�ama 2ye at�yoruz
				goto asama2;
			}else if(evethayir==2){			
				printf("\nYeniden giri� yapmak istedi�inizi belirttiniz.Tekrar Bilgi giri�i a�amas�na y�nlendiriliyorsunuz...\n\n"); //tekrar giri� yapmas� i�in en ba�a at�yoruz, her veri s�f�rlan�yor.
				goto asama1;
			}else{
				printf("\n\n");
				goto evthyr1;
			}		
		}else if(ogrenci_sayisi>1 && ogrenci_sayisi<5){
evthyr2:	printf("\n\n5'den az ��renci verisi girildi, devam etmek istiyor musunuz?[1-evet || 2-hay�r]:");  //burda da 5den az ��renci say�s� var devam etmek istiyo mu diye bak�yoz
			scanf(" %d",&evethayir);												  
			if(evethayir==1){
				printf("\nDevam etmek istedi�iniz belirttiniz. Bilgi alma a�amas�na y�nlendiriliyorsunuz...\n\n");//devam etmek istiyomu�, a�ama 2ye at�yoruz
				goto asama2;
			}else if(evethayir==2){
				printf("Yeniden giri� yapmak istedi�inizi belirttiniz.Tekrar Bilgi giri�i a�amas�na y�nlendiriliyorsunuz...\n\n"); //tekrar giri� yapmas� i�in en ba�a at�yoruz, her veri s�f�rlan�yor.
				goto asama1;
			}else{
				printf("\n\n");
				goto evthyr2;
			}			
		}
		
		
		printf("\n\n-1 girdiniz. Bilgi alma a�amas�na y�nlendiriliyorsunuz...\n\n"); //bilgi giri�i a�amas� tamamlan�yor. a�ama 2ye yolluyorum.
		goto asama2;}
		
	if(notlar[ogrenci_sayisi][0]<0 || notlar[ogrenci_sayisi][0]>2147483646){
		printf("\nYanl�� ��renci numaras� girdiniz.Tekrar numara giri�ine y�nlendiriliyorsunuz...\n\n");
		goto donguicinumara;
	}
	
vizegiris:	printf("\n%d numaral� ��rencinin Vize notunu giriniz:",notlar[ogrenci_sayisi][0]);
	scanf("%d",&notlar[ogrenci_sayisi][1]); //Vize notunu al�yorum
	
	if(notlar[ogrenci_sayisi][1]<0 || notlar[ogrenci_sayisi][1]>100){	//Vize 0-100 aras� m� diye kontrol ediyoruz
		printf("\n");						
		goto vizegiris;
	}
	
finalgiris:	printf("\n%d numaral� ��rencinin Final notunu giriniz:",notlar[ogrenci_sayisi][0]);
	scanf("%d",&notlar[ogrenci_sayisi][2]); //Final notunu al�yorum	
	
	if(notlar[ogrenci_sayisi][2]<0 || notlar[ogrenci_sayisi][2]>100){	//Vize 0-100 aras� m� diye kontrol ediyoruz
		printf("\n");
		goto finalgiris;
	}
	
	ortalama[ogrenci_sayisi]=(float)(notlar[ogrenci_sayisi][2]+notlar[ogrenci_sayisi][1])/2.0;	//��rencinin vize ve finali ortalamas�n� hesapl�yoruz.
	toplam=toplam+ortalama[ogrenci_sayisi];
	
	
	printf("\n------------------Kay�t Ger�ekle�tirilmi�tir------------------\n\n ");
		
	}
asama2:
	


	sinif_ort=toplam/ogrenci_sayisi;	//S�n�f ortalamas�n� buluyoruz
	
	if(sinif_ort<=35.0){
		can_notu=35.0;			//�an notunu buluyoruz
	}else{
		can_notu=sinif_ort;
	}
	
	
	printf("\nA�AMA 2\n\n");	
anasecim:    printf("s�n�f ile ilgili yap�labilir i�lemleri g�r�nt�lemek i�in 1'i\nNumaras� girilen ��renci hakk�nda bilgi almak i�in 2'yi tu�lay�n�z.\n[1-2]:"); //a�ama 2 
    
   scanf("%d",&giris); //hangi se�enek sorusu




    switch(giris){
    	
    	case 1:
kucukgiris1:
	
			oku_biralti2=0;
			oku_biralti=0;
			printf("\n��renci say�s� ��renmek i�in 1'i\nS�n�f ortalamas� ��renmek i�in 2'yi\n�an notunu ��renmek i�in 3'�\nGe�ti Ge�medi listesini g�rmek i�in 4'�,\nGe�ti Ge�medi say�s�n� ��renmek i�in 5'i\nGirilen de�er kadar �an notuna uzakl��a sahip ��rencileri g�rmek i�in 6'y� tu�lay�n�z.\n[1-6]:");
			scanf("%d",&oku_biralti); // s�n�f men�s�nden se�im yapt�r�yoruz
			
				switch(oku_biralti){
					
					case 1: // ��renci sayisi se�imi
						printf("\n��renci sayisi : %d\n",ogrenci_sayisi);
												
						menu2();
					break;
					
					case 2: 
						printf("\nS�n�f ortalamas� : %.2f\n",sinif_ort);
					
						menu2();
					break;	
					
					case 3: //�an notu se�imi
						printf("\n�an notu : %.2f\n",can_notu);
					
						menu2();
					break;
												
    				case 4: //ge�ti ge�medi listesi
						
						
						for(k=0;k<ogrenci_sayisi;k++){
						printf("\n%d numaral� ��rencinin Vize notu:%d  Final notu:%d\tOrtalamas�:%.2f  S�n�f �an notu:%.2f  Durumu:",notlar[k][0],notlar[k][1],notlar[k][2],ortalama[k],can_notu);
    					if(ortalama[k]>=can_notu){
    						printf(" Ge�ti");
						}else{							//Ge�ti kald� kontrol�
							printf(" Kald�");
						}	
						}
						printf("\n");
						
					
						menu2();							
							}
					break;
					
					case 5: //ge�ti ge�medi say�s�
						
						gsayisi=0;ksayisi=0; //ge�ti kald� say�s�n� 0'a e�itliyorum
						
						for(k=0;k<ogrenci_sayisi;k++){ //ge�ti kald� say�s�n� al�yorum
						
							if(ortalama[k]>=can_notu){
								gsayisi++;
							}else{
								ksayisi++;
							}
							
						}
						printf("\nGe�ti say�s�:%d\nKald� say�s�:%d\n",gsayisi,ksayisi);
						
					
						menu2();
					break;
					
					case 6: //n kadar uzakl�k muhabbeti
					
						printf("\nPuan�yla �an notu aras�nda, girilen N de�eri kadar fark olan ��rencileri listemek i�in,\nBir N de�eri giriniz: ");
						scanf("%f",&N);
												
						for(k=0;k<ogrenci_sayisi;k++){ //ge�ti kald� say�s�n� al�yorum
						
						if(can_notu-ortalama[k]<=N && can_notu-ortalama[k]>0){
							printf("\n%d Numaral� ��rencinin %2.f puana ihtiyac� var.(�uanki notu:%2.f)",notlar[k][0],can_notu-ortalama[k],ortalama[k]);
						}
						}
						printf("\n");
						
					
					menu2();
					break;
					
					}
    	
    	case 2:
kucukgiris2:
			j=0;
			printf("\nBilgilerini g�rmek istedi�iniz ��rencinin numaras�n� giriniz:");	//��renci numaras� al�yoruz, bilgileri g�stermek i�in
    		scanf("%d",&oku_numara);

			if(oku_numara<0 || oku_numara>2147483646){
				printf("\nYanl�� ��renci numaras� girdiniz.Tekrar numara giri�ine y�nlendiriliyorsunuz...\n");    //girilen ��renci numaras� adam ak�ll� bi say� m� diye kontrol ediyozz
				goto kucukgiris2;	
			}    		
    		
    		for(i=0;i<ogrenci_sayisi;i++){
    			if(oku_numara==notlar[i][0]){
    				
    				j=31;										//Bu a�amada ��renci bilgilerinin ��kt�s�n� yaz�yor
    				printf("\n%d numaral� ��rencinin;\nVize notu:%d\nFinal notu:%d\nOrtalamas�:%.2f\nS�n�f �an notu:%.2f\nDurumu:",notlar[i][0],notlar[i][1],notlar[i][2],ortalama[i],can_notu);
    					if(ortalama[i]>=can_notu){
    						printf(" Ge�ti\n");
						}else{							//Ge�ti kald� kontrol�
							printf(" Kald�\n");
						}

				}
			}
			if(j!=31){
				printf("\nGirmi� oldu�unuz numara i�in herhangi bir not kayd� yap�lmam��t�r.\nTekrar numara giri�ine y�nlendiriliyorsunuz...\n");
				goto kucukgiris2; //b�yle bi numara yok knk ��kt�s� verip bir daha numara girmesi i�in zorluyoruz. seve seve girecek aslan�m
				
			}
			
			printf("\nS�n�f ile ilgili i�lem mes�n�se d�nmek i�in 1'i,\nTekrar numara giri�i i�in 2'yi,\nGirilmi� bilgileri s�f�rlay�p tekrardan ana men�ye d�nmek i�in 3'� tu�lay�n\nAksi bir tu� sistemi kapatacakt�r : ");
    		scanf("%d",&giris);    //Burdan itibaren son i�aretli mavi yere kadar ��k�� men�s� diyorum. 
    		
    		switch(giris){
    			case 1:
    			printf("\nS�n�f ile ilgili i�lem mes�n�s�ne y�nlendiriliyorsunuz...\n"); //��k�� men�s�-s�n�fla ilgili i�lemlere d�nme
				goto kucukgiris1;
				break;
				
				case 2:
				printf("\nTekrar numara giri�ine y�nlendiriliyorsunuz...\n");		//��k�� men�s�- tekrar numara giri�i yapma
				goto kucukgiris2;
				break;
				
				case 3:
				printf("\nBilgiler s�f�rland�.Ana men�ye y�nlendiriliyorsunuz...\n");	// ��k�� men�s� - en ba�a d�nme
				goto asama1;
				break;
				
				default:
				printf("\nSistem kapat�l�yor...\n"); //��k�� men�s�, sistemi kapatma
				return 0;
				break;	
			}
    		
    		
    	break;
    	
    	default:
    		goto anasecim; // s�n�fla ya da ��renci numaras�yla i�lem yapma se�ene�inde ba�ka bi �ey se�mi� bi daha at�yorum oraya hi� bi �ey s�ylemeden. kendi anlas�n bi zahmet
    		printf("\n\n");
    	break;}
    	
	
    

	

cikis: return 0; }
