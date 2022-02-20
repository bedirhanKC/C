#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Turkish");

	int case2,gg,gsayisi=0,ksayisi=0,i,sinif,giris,ogrenci_sayisi=0;
	float N,sonuc,dizi[ogrenci_sayisi+1][4],bilgi=0.0,can;
	int dizi2[ogrenci_sayisi+1][1];
	char eh;


	
anamenu:printf("Sisteme bilgi girmek için 1'e\nSistemden bilgi almak için 2'ye basýnýz.\nGiriþ yapýnýz:");
	scanf("%d",&giris);
	
	switch(giris){
		
case1:	case 1: 
			ogrenci_sayisi=0;
			dizi[0][0]=1.0;
			dizi2[0][0]=1;

			printf("\nArd arda 3 defa [-1] Verisi girilene kadar bilgi giriþi devam edecektir.\n[Öðrenci_numarasý vize final] Biçiminde veri giriþi gerçekliþtirmeniz gerekiyor.\nÖðrenci numarasý baþýnda 2 olmadan girilecektir.\n");
			for(i=0;bilgi!=-1;i++){
			
				printf("\n");
				scanf("%d %f %f",&dizi2[i][0],&dizi[i][1],&dizi[i][2]);
				bilgi=dizi2[i][0];
				dizi[i][3]=dizi[i][1]*0.4+dizi[i][2]*0.6;
				ogrenci_sayisi++;
				}
			ogrenci_sayisi-=1;				

			if(ogrenci_sayisi==0){
				printf("\nHiçbir öðrenci verisi girilmedi. Tekrar veri giriþi yapmak için yönlendiriliyorsunuz...\n");
				goto case1;
			}else if(ogrenci_sayisi==1){
				printf("\nTek öðrenci verisi giriþi  yapýldý. Yeni baþtan veri giriþi yapmak istiyor musunuz? [E-H]:");
				scanf(" %c",&eh);
								
				if(eh=='E'||eh=='e' ){
					printf("\nTekrar veri giriþi isteðiniz doðrultusunda yönlendiriliyorsunuz...\n");
					goto case1;
				}else{
					printf("\nTekrar veri giriþi isteðiniz bulunmamasý sebebiyle, bilgi alma menüsüne yönlendiriliyorsunuz\n(tek kiþinin ne bilgisini alacaksan, enayi)\n");
					}
			}else{
			}		
			goto case2;			
			break;
			
			
		
	case 2:
	case2:
			if(ogrenci_sayisi==0){
				printf("\nolmayan öðrenci ile ilgili veri alamazsýnýz.");
				return 0;
			}
			
			printf("\n");
			printf("\nSýnýf ile ilgili iþlem yapmak için 1'e\nÖðrenci numarasý ile bilgi almak için 2'ye basýn.\n[1-2]:");
			scanf("%d",&case2);
			printf("\n");
			switch(case2){
				
				case 1:
					printf("\nÖðrenci Sayisi öðrenmek için 1'i\nSýnýf ortalamasý öðrenmek için 2'yi\nÇan notunu öðrenmek için 3'ü\nGeçti-geçmedi kontrolü için 4'ü\nÇan notuna yakýn ortalamaya sahip öðrencileri görmek için 5'i tuþlayýn.\n[1-5]:");
					scanf("%d",&sinif);
					printf("\n");					
					switch(sinif){
						case 1:
							
							printf("\nSýnýfýnýzdaki öðrenci sayýsý:%d\n",ogrenci_sayisi);
							break;
							
						case 2:
							
							sonuc=0.0;
							for(i=0;i<ogrenci_sayisi;i++){
								sonuc+=dizi[i][3];
							}
							sonuc=sonuc/(float)ogrenci_sayisi;
							printf("\nSýnýf ortalamasý:%.2f",sonuc);
							break;
							
						case 3:
							
							sonuc=0.0;
							for(i=0;i<ogrenci_sayisi;i++){
								sonuc+=dizi[i][3];
							}
							sonuc=sonuc/(float)ogrenci_sayisi;
							if(sonuc<=35){
								printf("\nçan notu:35\n");
							}else{
								printf("\nçan notu:%.2f\n",sonuc);
							}
							break;
							
						case 4:
gg:							printf("\nGeçen ve Kalan öðrenci sayýný öðrenmek için1'i\nGeçti-Kaldý listesine ulaþmak için 2'yi tuþlayýnýz.\n[1-2]:");
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
									printf("\nGeçen kiþi sayisi:%d\nKalan kiþi sayisi:%d\n",gsayisi,ksayisi);
									break;
									
								case 2:
									for(i=0;i<ogrenci_sayisi;i++){
										if(dizi[i][3]>=can){
											printf("%.f numaralý öðrenci, %.2f ortalama ile geçti\n",dizi2[i][0],dizi[i][3]);
										}else{
											printf("%.f numaralý öðrenci, %.2f ortalama ile kaldý\n",dizi2[i][0],dizi[i][3]);
										}
									}	
									break;
								default:
									
									printf("\nYanlýþ tuþlama yaptýnýz. keyfim kapatmak istedi");
									break;
							}
							
							break;
							
						case 5:
							
							printf("\nGirdiðiniz [N] deðeri kadar çana uzaklýðý bulunan puanlara sahip öðrencileri listelemek için\n[N]:");
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
									printf("\n2%.f numaralý öðrencinin geçmek için %.2f puana ihtiyacý var.Þuanki notu:%.2f\n",dizi2[i][0],can-dizi[i][3],dizi[i][3]);
								}else{
								}
							}
							
							break;
							
						default:
							printf("Yanlýþ girdin, keyfim sistemi kapatmak istedi");
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
						
						printf("Bilgilerini görmek istediðiniz öðrencinin numarasýný, baþýnda 2 olmadan giriniz.\n");
						scanf("%f",&N);
				
						for(i=0;i<ogrenci_sayisi;i++){
							if(N==dizi2[i][0]){
								
								if(can>dizi[i][3]){
									printf("\n\n%d numaralý öðrencinin\nVize:%.2f\nFinal:%.2f\nOrtalama:%.2f\nDurumu:kaldý\n\n",dizi2[i][0],dizi[i][1],dizi[i][2],dizi[i][3]);	
									goto last;								
								}else{
									printf("\n\n%d numaralý öðrencinin\nVize:%.2f\nFinal:%.2f\nOrtalama:%.2f\nDurumu:geçti\n\n",dizi2[i][0],dizi[i][1],dizi[i][2],dizi[i][3]);
									goto last;
									
								}
								
							}
						} printf("böyle biri yok knk");
						last:
					break;
 
				default:
					
					printf("\nYanlýþ tuþlama yaptýnýz.");
					break;
			}	
			break;
		default:
			printf("\nYanlýþ tuþlama yaptýnýz.");
			break;
	}
	
		



		
	
	
return 0;
}


