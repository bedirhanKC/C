#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Turkish");

	int case2,gg,gsayisi=0,ksayisi=0,i,sinif,giris,ogrenci_sayisi=0;
	float N,sonuc,dizi[ogrenci_sayisi+1][4],bilgi=0.0,can;
	int dizi2[ogrenci_sayisi+1][1];
	char eh;


	
anamenu:printf("Sisteme bilgi girmek i�in 1'e\nSistemden bilgi almak i�in 2'ye bas�n�z.\nGiri� yap�n�z:");
	scanf("%d",&giris);
	
	switch(giris){
		
case1:	case 1: 
			ogrenci_sayisi=0;
			dizi[0][0]=1.0;
			dizi2[0][0]=1;

			printf("\nArd arda 3 defa [-1] Verisi girilene kadar bilgi giri�i devam edecektir.\n[��renci_numaras� vize final] Bi�iminde veri giri�i ger�ekli�tirmeniz gerekiyor.\n��renci numaras� ba��nda 2 olmadan girilecektir.\n");
			for(i=0;bilgi!=-1;i++){
			
				printf("\n");
				scanf("%d %f %f",&dizi2[i][0],&dizi[i][1],&dizi[i][2]);
				bilgi=dizi2[i][0];
				dizi[i][3]=dizi[i][1]*0.4+dizi[i][2]*0.6;
				ogrenci_sayisi++;
				}
			ogrenci_sayisi-=1;				

			if(ogrenci_sayisi==0){
				printf("\nHi�bir ��renci verisi girilmedi. Tekrar veri giri�i yapmak i�in y�nlendiriliyorsunuz...\n");
				goto case1;
			}else if(ogrenci_sayisi==1){
				printf("\nTek ��renci verisi giri�i  yap�ld�. Yeni ba�tan veri giri�i yapmak istiyor musunuz? [E-H]:");
				scanf(" %c",&eh);
								
				if(eh=='E'||eh=='e' ){
					printf("\nTekrar veri giri�i iste�iniz do�rultusunda y�nlendiriliyorsunuz...\n");
					goto case1;
				}else{
					printf("\nTekrar veri giri�i iste�iniz bulunmamas� sebebiyle, bilgi alma men�s�ne y�nlendiriliyorsunuz\n(tek ki�inin ne bilgisini alacaksan, enayi)\n");
					}
			}else{
			}		
			goto case2;			
			break;
			
			
		
	case 2:
	case2:
			if(ogrenci_sayisi==0){
				printf("\nolmayan ��renci ile ilgili veri alamazs�n�z.");
				return 0;
			}
			
			printf("\n");
			printf("\nS�n�f ile ilgili i�lem yapmak i�in 1'e\n��renci numaras� ile bilgi almak i�in 2'ye bas�n.\n[1-2]:");
			scanf("%d",&case2);
			printf("\n");
			switch(case2){
				
				case 1:
					printf("\n��renci Sayisi ��renmek i�in 1'i\nS�n�f ortalamas� ��renmek i�in 2'yi\n�an notunu ��renmek i�in 3'�\nGe�ti-ge�medi kontrol� i�in 4'�\n�an notuna yak�n ortalamaya sahip ��rencileri g�rmek i�in 5'i tu�lay�n.\n[1-5]:");
					scanf("%d",&sinif);
					printf("\n");					
					switch(sinif){
						case 1:
							
							printf("\nS�n�f�n�zdaki ��renci say�s�:%d\n",ogrenci_sayisi);
							break;
							
						case 2:
							
							sonuc=0.0;
							for(i=0;i<ogrenci_sayisi;i++){
								sonuc+=dizi[i][3];
							}
							sonuc=sonuc/(float)ogrenci_sayisi;
							printf("\nS�n�f ortalamas�:%.2f",sonuc);
							break;
							
						case 3:
							
							sonuc=0.0;
							for(i=0;i<ogrenci_sayisi;i++){
								sonuc+=dizi[i][3];
							}
							sonuc=sonuc/(float)ogrenci_sayisi;
							if(sonuc<=35){
								printf("\n�an notu:35\n");
							}else{
								printf("\n�an notu:%.2f\n",sonuc);
							}
							break;
							
						case 4:
gg:							printf("\nGe�en ve Kalan ��renci say�n� ��renmek i�in1'i\nGe�ti-Kald� listesine ula�mak i�in 2'yi tu�lay�n�z.\n[1-2]:");
							scanf("%d",&gg);
							
							sonuc=0.0;
							for(i=0;i<ogrenci_sayisi;i++){
								sonuc+=dizi[i][3];
							}
							sonuc=sonuc/(float)ogrenci_sayisi;
							if(sonuc<=35){
								can=35;
							}else{
								can=sonuc;
							}
							
							switch(gg){
								case 1:
									for(i=0;i<ogrenci_sayisi;i++){
										if(dizi[i][3]>=can){
											gsayisi++;
										}else{
											ksayisi++;
										}
									}
									printf("\nGe�en ki�i sayisi:%d\nKalan ki�i sayisi:%d\n",gsayisi,ksayisi);
									break;
									
								case 2:
									for(i=0;i<ogrenci_sayisi;i++){
										if(dizi[i][3]>=can){
											printf("%.f numaral� ��renci, %.2f ortalama ile ge�ti\n",dizi2[i][0],dizi[i][3]);
										}else{
											printf("%.f numaral� ��renci, %.2f ortalama ile kald�\n",dizi2[i][0],dizi[i][3]);
										}
									}	
									break;
								default:
									
									printf("\nYanl�� tu�lama yapt�n�z. keyfim kapatmak istedi");
									break;
							}
							
							break;
							
						case 5:
							
							printf("\nGirdi�iniz [N] de�eri kadar �ana uzakl��� bulunan puanlara sahip ��rencileri listelemek i�in\n[N]:");
							scanf("%f",&N);
							
							sonuc=0.0;
							for(i=0;i<ogrenci_sayisi;i++){
								sonuc+=dizi[i][3];
							}
							sonuc=sonuc/(float)ogrenci_sayisi;
							if(sonuc<=35){
								can=35;
							}else{
								can=sonuc;
							}
							
							for(i=0;i<ogrenci_sayisi;i++){
								
								if(can-dizi[i][3]<=N && can-dizi[i][3]>0){
									printf("\n2%.f numaral� ��rencinin ge�mek i�in %.2f puana ihtiyac� var.�uanki notu:%.2f\n",dizi2[i][0],can-dizi[i][3],dizi[i][3]);
								}else{
								}
							}
							
							break;
							
						default:
							printf("Yanl�� girdin, keyfim sistemi kapatmak istedi");
							break;
					}
					break;
				case 2:
					
						sonuc=0.0;
						for(i=0;i<ogrenci_sayisi;i++){
							sonuc+=dizi[i][3];
						}
						sonuc=sonuc/(float)ogrenci_sayisi;
						if(sonuc<=35){
							can=35;
						}else{
							can=sonuc;
						}
						
						printf("Bilgilerini g�rmek istedi�iniz ��rencinin numaras�n�, ba��nda 2 olmadan giriniz.\n");
						scanf("%f",&N);
				
						for(i=0;i<ogrenci_sayisi;i++){
							if(N==dizi2[i][0]){
								
								if(can>dizi[i][3]){
									printf("\n\n%d numaral� ��rencinin\nVize:%.2f\nFinal:%.2f\nOrtalama:%.2f\nDurumu:kald�\n\n",dizi2[i][0],dizi[i][1],dizi[i][2],dizi[i][3]);	
									goto last;								
								}else{
									printf("\n\n%d numaral� ��rencinin\nVize:%.2f\nFinal:%.2f\nOrtalama:%.2f\nDurumu:ge�ti\n\n",dizi2[i][0],dizi[i][1],dizi[i][2],dizi[i][3]);
									goto last;
									
								}
								
							}
						} printf("b�yle biri yok knk");
						last:
					break;
 
				default:
					
					printf("\nYanl�� tu�lama yapt�n�z.");
					break;
			}	
			break;
		default:
			printf("\nYanl�� tu�lama yapt�n�z.");
			break;
	}
	
		



		
	
	
return 0;
}


