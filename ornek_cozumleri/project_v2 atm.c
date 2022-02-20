#include<stdio.h>
void menu(){
	printf("----Menu----\n");
	printf("1 Kasayi Goster\n");
	printf("2 Para Cekme\n");
	printf("3 Para Yatirma\n");
	printf("4 Cikis\n");
	printf("Seciminiz :");}
	

int main(){
	
	int beslik=50;
    int onluk=50;	
	int yirmilik=50;
	int ellilik=20;
	int yuzluk=10;	
	int bakiye=3750;
	int YeniBakiye;
	
	int a,giris,CekmeMiktari,YatirmaMiktari;
	
menu:menu();
	
	scanf("%d",&giris);
	
	switch(giris){
		
		case 1:
			printf("\nKasa anlik durumu:\n");
			printf("\nYuzluk sayisi:%d",yuzluk);
			printf("\nEllilik sayisi:%d",ellilik);
			printf("\nyirmilik sayisi:%d",yirmilik);
			printf("\nonluk sayisi:%d",onluk);
			printf("\nbeslik sayisi:%d\n\n",beslik);
			
		goto menu;break;
		
		case 2:
			printf("\ncekmek istediginiz miktari giriniz:");
			scanf("%d",&CekmeMiktari);
			
			while(CekmeMiktari%5!=0){
			printf("\ncekmek istediginiz miktari giriniz:");
			scanf("%d",&CekmeMiktari);}
			
			a=CekmeMiktari;
			YeniBakiye=bakiye-a;
			
			while(a>0){
				if(a>=100){
					a-=100;
					yuzluk--;
				}else if(a>=50){
					a-=50;
					ellilik--;
				}else if(a>=20){
					a-=20;
					yirmilik--;
				}else if(a>=10){
					a-=10;
					onluk--;
				}else{
					a-=5;
					beslik--;
				}				
			}
			printf("\nEski bakiye:%d",bakiye);
			printf("\nCekilen miktar:%d",CekmeMiktari);
			printf("\nYeni bakiye:%d\n\n",YeniBakiye);
			
			bakiye=YeniBakiye;YeniBakiye=0;a=0;
			
		goto menu;break;
		
		case 3:
			
			printf("\nYatirmak istediginiz miktari giriniz:");
			scanf("%d",&YatirmaMiktari);
			
			while(CekmeMiktari%5!=0){
			printf("\ncekmek istediginiz miktari giriniz:");
			scanf("%d",&CekmeMiktari);}
			
			a=YatirmaMiktari;
			YeniBakiye=bakiye+YatirmaMiktari;
			
			while(a>0){
				if(a>=100){
					a-=100;
					yuzluk++;
				}else if(a>=50){
					a-=50;
					ellilik++;
				}else if(a>=20){
					a-=20;
					yirmilik++;
				}else if(a>=10){
					a-=10;
					onluk++;
				}else{
					a-=5;
					beslik++;
				}
			}
			printf("\nEski bakiye:%d",bakiye);
			printf("\nYatirilan miktar:%d",YatirmaMiktari);
			printf("\nYeni bakiye:%d\n\n",YeniBakiye);
			
			bakiye=YeniBakiye;YeniBakiye=0;a=0;
			
		goto menu;break;
		
		default:
			printf("Yanlis giris yaptin, sg.");
			return 0;	
	}
	
	
return 0;
}
