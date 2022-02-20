#include<stdio.h>
void menu(){
	printf("----Menu----\n");
	printf("1 Kasayi Goster\n");
	printf("2 Para Cekme\n");
	printf("3 Para Yatirma\n");
	printf("4 Cikis\n");
	printf("Seciminiz :");}
	
void KasaDurumu(int yuzlukx,int ellilikx,int yirmilikx,int onlukx,int beslikx){
	printf("\nKasa anlik durumu:\n");
	printf("\nYuzluk sayisi:%d",yuzlukx);
	printf("\nEllilik sayisi:%d",ellilikx);
	printf("\nyirmilik sayisi:%d",yirmilikx);
	printf("\nonluk sayisi:%d",onlukx);
	printf("\nbeslik sayisi:%d\n\n",beslikx);
			
}
	
void ParaCekme(int CekmeMiktarix,int ax,int bakiyex,int yuzlukx,int ellilikx,int yirmilikx,int onlukx, int beslikx){
	printf("\ncekmek istediginiz miktari giriniz:");
	scanf("%d",&CekmeMiktarix); 
			
		while(CekmeMiktarix%5!=0){
		printf("\ncekmek istediginiz miktari giriniz:");	
		scanf("%d",&CekmeMiktarix);}
			
	ax=CekmeMiktarix;	
				
		while(ax>0){
			if(ax>=100){		
				ax-=100;
				yuzlukx--;
			}else if(ax>=50){
				ax-=50;
				ellilikx--;
			}else if(ax>=20){
				ax-=20;
				yirmilikx--;
			}else if(ax>=10){
				ax-=10;
				onlukx--;
			}else{
				ax-=5;
				beslikx--;
			}				
		}
		printf("\nEski bakiye:%d",bakiyex);
		printf("\nCekilen miktar:%d",CekmeMiktarix);
		printf("\nYeni bakiye:%d\n\n",bakiyex-CekmeMiktarix);
		
		bakiyex=bakiyex-CekmeMiktarix;
		ax=0;
}


void ParaYatirma(int YatirmaMiktarix,int ax,int bakiyex,int yuzlukx,int ellilikx,int yirmilikx,int onlukx, int beslikx){
	printf("\nYatirmak istediginiz miktari giriniz:");
	scanf("%d",&YatirmaMiktarix);
			
		while(YatirmaMiktarix%5!=0){
		printf("\nYatirmak istediginiz miktari giriniz:");
		scanf("%d",&YatirmaMiktarix);}
			
	ax=YatirmaMiktarix;
			
		while(ax>0){
			if(ax>=100){
				ax-=100;
				yuzlukx++;
			}else if(ax>=50){
				ax-=50;
				ellilikx++;
			}else if(ax>=20){
				ax-=20;
				yirmilikx++;
			}else if(ax>=10){
				ax-=10;
				onlukx++;
			}else{
				ax-=5;
				beslikx++;
			}				
		}
		printf("\nEski bakiye:%d",bakiyex);
		printf("\nYatirilan miktar:%d",YatirmaMiktarix);
		printf("\nYeni bakiye:%d\n\n",bakiyex+YatirmaMiktarix);
			
		bakiyex=bakiyex+YatirmaMiktarix;ax=0;
}

int main(){
	
	int beslik=50;
    int onluk=50;	
	int yirmilik=50;
	int ellilik=20;
	int yuzluk=10;	
	int bakiye=3750;
	
	int a,giris,CekmeMiktari,YatirmaMiktari;
	
	menu();
	scanf("%d",&giris);
	
	while(giris!=4){
		
		if(giris==1){
			KasaDurumu(yuzluk,ellilik,yirmilik,onluk,beslik);
		}else if(giris==2){
			ParaCekme(CekmeMiktari,a,bakiye,yuzluk,ellilik,yirmilik,onluk,beslik);
		}else if(giris==3){
			ParaYatirma(YatirmaMiktari,a,bakiye,yuzluk,ellilik,yirmilik,onluk,beslik);
		}else{
			printf("\nYanlis giris yaptiniz...\n\n");
		}
		
		menu();
		scanf("%d",&giris);
	}
	
	
return 0;}
