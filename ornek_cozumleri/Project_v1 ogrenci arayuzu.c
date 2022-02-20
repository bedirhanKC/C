#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Turkish");

	int case2,gg,gsayisi=0,ksayisi=0,i,sinif,giris,ogrenci_sayisi=0;
	float N,sonuc,dizi[ogrenci_sayisi+1][4],bilgi=0.0,can;
	int dizi2[ogrenci_sayisi+1][1];
	char eh;


	
anamenu:printf("Sisteme bilgi girmek için 1'e\nSistemden bilgi almak için 2'ye basınız.\nGiriş yapınız:");
	scanf("%d",&giris);
	
	switch(giris){
		
case1:	case 1: 
			
			ogrenci_sayisi=0;
			dizi[0][0]=1.0;
			dizi2[0][0]=1;

			printf("\nArd arda 3 defa [-1] Verisi girilene kadar bilgi girişi devam edecektir.\n[Öğrenci_numarası vize final] Biçiminde veri girişi gerçekliştirmeniz gerekiyor.\nÖğrenci numarası başında 2 olmadan girilecektir.\n");
			for(i=0;bilgi!=-1;i++){
			
				printf("\n");
				scanf("%d %f %f",&dizi2[i][0],&dizi[i][1],&dizi[i][2]);
				bilgi=dizi2[i][0];
				dizi[i][3]=dizi[i][1]*0.4+dizi[i][2]*0.6;
				ogrenci_sayisi++;
				}
			ogrenci_sayisi-=1;				

			if(ogrenci_sayisi==0){
				printf("\nHiçbir öğrenci verisi girilmedi. Tekrar veri girişi yapmak için yönlendiriliyorsunuz...\n");
				goto case1;
			}else if(ogrenci_sayisi==1){
				printf("\nTek öğrenci verisi girişi  yapıldı. Yeni baştan veri girişi yapmak istiyor musunuz? [E-H]:");
				scanf(" %c",&eh);
								
				if(eh=='E'||eh=='e' ){
					printf("\nTekrar veri girişi isteğiniz doğrultusunda yönlendiriliyorsunuz...\n");
					goto case1;
				}else{
					printf("\nTekrar veri girişi isteğiniz bulunmaması sebebiyle, bilgi alma menüsüne yönlendiriliyorsunuz\n(tek kişinin ne bilgisini alacaksan, enayi)\n");
					}
			}else{
			}		
			goto case2;			
			break;
			
			
		
	case 2:
	case2:
			if(ogrenci_sayisi==0){
				printf("\nolmayan öğrenci ile ilgili veri alamazsınız.");
				return 0;
			}
			
			printf("\n");
			printf("\nSınıf ile ilgili işlem yapmak için 1'e\nÖğrenci numarası ile bilgi almak için 2'ye basın.\n[1-2]:");
			scanf("%d",&case2);
			printf("\n");
			switch(case2){
				
				case 1:
					printf("\nÖğrenci Sayisi öğrenmek için 1'i\nSınıf ortalaması öğrenmek için 2'yi\nÇan notunu öğrenmek için 3'ü\nGeçti-geçmedi kontrolü için 4'ü\nÇan notuna yakın ortalamaya sahip öğrencileri görmek için 5'i tuşlayın.\n[1-5]:");
					scanf("%d",&sinif);
					printf("\n");					
					switch(sinif){
						case 1:
							
							printf("\nSınıfınızdaki öğrenci sayısı:%d\n",ogrenci_sayisi);
							break;
							
						case 2:
							
							sonuc=0.0;
							for(i=0;i<ogrenci_sayisi;i++){
								sonuc+=dizi[i][3];
							}
							sonuc=sonuc/(float)ogrenci_sayisi;
							printf("\nSınıf ortalaması:%.2f",sonuc);
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
gg:							printf("\nGeçen ve Kalan öğrenci sayını öğrenmek için1'i\nGeçti-Kaldı listesine ulaşmak için 2'yi tuşlayınız.\n[1-2]:");
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
									printf("\nGeçen kişi sayisi:%d\nKalan kişi sayisi:%d\n",gsayisi,ksayisi);
									break;
									
								case 2:
									for(i=0;i<ogrenci_sayisi;i++){
										if(dizi[i][3]>=can){
											printf("%.f numaralı öğrenci, %.2f ortalama ile geçti\n",dizi2[i][0],dizi[i][3]);
										}else{
											printf("%.f numaralı öğrenci, %.2f ortalama ile kaldı\n",dizi2[i][0],dizi[i][3]);
										}
									}	
									break;
								default:
									
									printf("\nYanlış tuşlama yaptınız. keyfim kapatmak istedi");
									break;
							}
							
							break;
							
						case 5:
							
							printf("\nGirdiğiniz [N] değeri kadar çana uzaklığı bulunan puanlara sahip öğrencileri listelemek için\n[N]:");
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
									printf("\n2%.f numaralı öğrencinin geçmek için %.2f puana ihtiyacı var.Şuanki notu:%.2f\n",dizi2[i][0],can-dizi[i][3],dizi[i][3]);
								}else{
								}
							}
							
							break;
							
						default:
							printf("Yanlış girdin, keyfim sistemi kapatmak istedi");
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
						
						printf("Bilgilerini görmek istediğiniz öğrencinin numarasını, başında 2 olmadan giriniz.\n");
						scanf("%f",&N);
				
						for(i=0;i<ogrenci_sayisi;i++){
							if(N==dizi2[i][0]){
								
								if(can>dizi[i][3]){
									printf("\n\n%d numaralı öğrencinin\nVize:%.2f\nFinal:%.2f\nOrtalama:%.2f\nDurumu:kaldı\n\n",dizi2[i][0],dizi[i][1],dizi[i][2],dizi[i][3]);	
									goto last;								
								}else{
									printf("\n\n%d numaralı öğrencinin\nVize:%.2f\nFinal:%.2f\nOrtalama:%.2f\nDurumu:geçti\n\n",dizi2[i][0],dizi[i][1],dizi[i][2],dizi[i][3]);
									goto last;
									
								}
								
							}
						} printf("böyle biri yok knk");
						last:
					break;
 
				default:
					
					printf("\nYanlış tuşlama yaptınız.");
					break;
			}	
			break;
		default:
			printf("\nYanlış tuşlama yaptınız.");
			break;
	}
	
	
	
return 0;
}


