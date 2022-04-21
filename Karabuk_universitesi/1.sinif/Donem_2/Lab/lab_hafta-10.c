#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct ogrenci{
	
	char isim[50];
	char soyisim[50];
	int numara;
	int vize;
	int final;
	struct ogrenci* next;
	
};

typedef struct ogrenci ogrenci;

int main(){
	
	int menu,ogrenciSayisi=0,kontrol;
	ogrenci *head,*p,*max;
	int RNumara;
	float ortalama;
	
	
	
	
	while(1){
		
	printf("---------MENU--------------\n1-Yeni Kayit Ekleme\n2-Kayit Listeleme\n3-Kayit Guncelleme\n4-Sinif ortalamasi hesapla\n5-Ortalamaya gore en basarili ogrenciyi gosterme\nBir islem seciniz :" );
	scanf("%d",&menu);
	
	if(menu==-1)break;
		
		switch(menu){
			
			case 1:
				
				if(ogrenciSayisi==0){
					
				head=(ogrenci*)malloc(sizeof(ogrenci));
				p=head;
				ogrenciSayisi++;
				
				}else{
					
					p->next=(ogrenci*)malloc(sizeof(ogrenci));
					p=p->next;
					ogrenciSayisi++;
				}
				
				printf("\n--------------\n");
				printf("Ogrencinin numarasi : ");
				scanf("%d",&p->numara);
				printf("Ogrencinin ismi : ");
				scanf("%s",p->isim);
				printf("Ogrencinin soyismi : ");
				scanf("%s",p->soyisim);
				printf("Ogrencinin vizesi : ");
				scanf("%d",&p->vize);
				printf("Ogrencinin finali : ");
				scanf("%d",&p->final);
				printf("----------------------\n\n");
				
				p->next=NULL;
			
			break;
			
			case 2:
				
				p=head;
				
				printf("\n------Ogrenci Listesi---------\n");
				
				while(p!=NULL){
					
				printf("%d %s %s : %d %d",p->numara,p->isim,p->soyisim,p->vize,p->final);
				printf("\n");
				p=p->next;
					
				}
			printf("\n");
				
			break;
			
			case 3:
				
				printf("\nGuncellenecek Ogrencinin Numarasini giriniz : ");
				scanf("%d",&RNumara);
				
				p=head;
				kontrol=0;
				
				while(p!=NULL){
					
					if(RNumara==p->numara){
						
						printf("\n-----------------------\n");
						printf("Ogrencinin numarasi : ");
						scanf("%d",&p->numara);
						printf("Ogrencinin ismi : ");
						scanf("%s",p->isim);
						printf("Ogrencinin soyismi : ");
						scanf("%s",p->soyisim);
						printf("Ogrencinin vizesi : ");
						scanf("%d",&p->vize);
						printf("Ogrencinin finali : ");
						scanf("%d",&p->final);
						printf("----------------------\n");
						printf("Yenileme islemi basariyla tamamlandi.\n\n");
						
						kontrol=1;
						break;
						
					}else p=p->next;
					
				}
				
				if(kontrol==0) printf("\nAradiginiz ogrenci bulunamadi. \n\n");
				
			break;
			
			case 4:
				
				p=head;
				
				while(p!=NULL){
					
					ortalama+=(p->vize*0.4)+(p->final*0.6);
					
					p=p->next;
					
				}
				
				ortalama=ortalama/ogrenciSayisi;
				
				printf("\nSinif ortalamasi : %.2f\n\n",ortalama);
			
			break;
			
			case 5:
				
				p=head;
				max=head;
				
				while(p!=NULL){
					
					if((p->vize*0.4)+(p->final*0.6)>=(max->vize*0.4)+(max->final*0.6)) max=p;
					
					p=p->next;
					
				}
				
				printf("\nEn basarili ogrenci:\n");
				printf("%d %s %s : %d %d \n\n",max->numara,max->isim,max->soyisim,max->vize,max->final);
			
				
			break;
				
		}	
		
	}
	
	
	return 0;
}
