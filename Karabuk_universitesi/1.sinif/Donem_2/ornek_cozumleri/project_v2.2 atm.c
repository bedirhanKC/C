/*
Bedirhan Kömürcü
18.03.2022
21.30
*/

#include<stdio.h>
#include<stdlib.h>

int BakiyeYeterliligi(int CekilecekTutar,int *pbakiye){
	
	if(CekilecekTutar>*pbakiye){	
		printf("\nBakiyeniz Yetersiz.\n\n");
		return 0;
	}
	else return 1;
	
}

int BakiyeDogrulugu(int CekilecekTutar){
	
	if(CekilecekTutar%5==0) return 1;
	
	else{		
		printf("\nGecersiz miktar girdiniz.");
		return 0;
	}	
}

void BanknotEsitleme(int *pbeslik,int *ponluk,int *pyirmilik,int *pellilik,int *pyuzluk){
	
	
	
	if(*pyuzluk<0){
		
		*pellilik=((*pellilik)-(2*((*pyuzluk)*(-1))));
		*pyuzluk=0;
		
	}if(*pellilik<0){
		
		*pyirmilik=(*pyirmilik)-(2*((*pellilik)*(-1)));
		*ponluk=((*ponluk)-(1*((*pellilik)*(-1))));
		*pellilik=0;
		
	}if(*pyirmilik<0){
		
		*ponluk=((*ponluk)-(2*((*pyirmilik)*(-1))));
		*pyirmilik=0;
		
	}if(*ponluk<0){
		
		*pbeslik=((*pbeslik)-(2*((*ponluk)*(-1))));
		*ponluk=0;
		
	}
	
}

void ParaCekmeYazdirma(int CekilecekTutar,int *pbakiye){
	
	printf("\nEski Bakiye : %d",(*pbakiye));
	printf("\nCekilen tutar : %d",CekilecekTutar);
	printf("\nYeni Bakiye : %d",(*pbakiye)-CekilecekTutar);
	
	printf("\n");
	
}

void ParaYatirmaYazdirma(int YatirilacakTutar,int *pbakiye){
	
	printf("\nEski Bakiye : %d",(*pbakiye));
	printf("\nYatirilan tutar : %d",YatirilacakTutar);
	printf("\nYeni Bakiye : %d",(*pbakiye)+YatirilacakTutar);
	
	printf("\n");
	
}

void KasaDurumuYazdirma(int *pbeslik,int *ponluk,int *pyirmilik,int *pellilik,int *pyuzluk,int *pbakiye){
	
		
	printf("\nKasa\n--------------------\n");
	printf("Bakiye : %d \n",*pbakiye);
	printf("Yuzluk sayisi : %d \n",*pyuzluk);
	printf("ellilik sayisi : %d \n",*pellilik);
	printf("yirmilik sayisi : %d \n",*pyirmilik);
	printf("onluk sayisi : %d \n",*ponluk);
	printf("beslik sayisi : %d \n",*pbeslik);	
	printf("--------------------------\n");

	printf("\n");
}

int ParaCekme(int CekilecekTutar,int *pbeslik,int *ponluk,int *pyirmilik,int *pellilik,int *pyuzluk,int *pbakiye){

	if(BakiyeYeterliligi(CekilecekTutar,pbakiye)==0) return 0;
	if(BakiyeDogrulugu(CekilecekTutar)==0) return 0;
	
	ParaCekmeYazdirma(CekilecekTutar,pbakiye);
	
	*pbakiye=(*pbakiye)-CekilecekTutar;
	
	if(CekilecekTutar>=100){
		
		*(pyuzluk)=(*pyuzluk)-CekilecekTutar/100;
		CekilecekTutar=CekilecekTutar%100;
		
	}if(CekilecekTutar>=50 ){
		
		*(pellilik)=(*pellilik)-CekilecekTutar/50;
		CekilecekTutar=CekilecekTutar%50;
		
	}if(CekilecekTutar>=20 ){
		
		*(pyirmilik)=(*pyirmilik)-CekilecekTutar/20;
		CekilecekTutar=CekilecekTutar%20;

		
	}if(CekilecekTutar>=10 ){
			
		*(ponluk)=(*ponluk)-CekilecekTutar/10;
		CekilecekTutar=CekilecekTutar%10;
		
	}if(CekilecekTutar>=5 ){
				
		*(pbeslik)=(*pbeslik)-CekilecekTutar/5;
		CekilecekTutar=CekilecekTutar%5;
		
	}
	
	BanknotEsitleme(pbeslik,ponluk,pyirmilik,pellilik,pyuzluk);

	
}

int ParaYatirma(int YatirilacakTutar,int *pbeslik,int *ponluk,int *pyirmilik,int *pellilik,int *pyuzluk,int *pbakiye){
	
	if(BakiyeDogrulugu(YatirilacakTutar)==0) return 0;
	
	ParaYatirmaYazdirma(YatirilacakTutar,pbakiye);
	
	*pbakiye=(*pbakiye)+YatirilacakTutar;
	
	
	if(YatirilacakTutar>=100){
			
		*(pyuzluk)=(*pyuzluk)+YatirilacakTutar/100;
		YatirilacakTutar=YatirilacakTutar%100;

		
	}if(YatirilacakTutar>=50 ){
		
		*(pellilik)=(*pellilik)+YatirilacakTutar/50;
		YatirilacakTutar=YatirilacakTutar%50;
		
	}if(YatirilacakTutar>=20){
		
		*(pyirmilik)=(*pyirmilik)+YatirilacakTutar/20;
		YatirilacakTutar=YatirilacakTutar%20;
		
	}if(YatirilacakTutar>=10){
		
		*(ponluk)=(*ponluk)+YatirilacakTutar/10;
		YatirilacakTutar=YatirilacakTutar%10;
		
	}if(YatirilacakTutar>=5){
		
		*(pbeslik)=(*pbeslik)+YatirilacakTutar/5;
		YatirilacakTutar=YatirilacakTutar%5;
		
	}
	

}

int main(){
	
	
	int beslik=50,onluk=50,yirmilik=50,ellilik=20,yuzluk=10,bakiye=3750;
	int *pbeslik,*ponluk,*pyirmilik,*pellilik,*pyuzluk,*pbakiye;
	
	pbeslik=&beslik;
	ponluk=&onluk;
	pyirmilik=&yirmilik;
	pellilik=&ellilik;
	pyuzluk=&yuzluk;
	pbakiye=&bakiye;
	
	int islem,CekilecekTutar,YatirilacakTutar;
	
	printf("         MENU         \n");
	printf("--------------------------\n");	
	printf("1-Para Cekme \n2-Para Yatirma \n3-Kasayi Gosterme \n");
	printf("Gerceklestirmek istediginiz islemi seciniz[ -1 girilince sistem kapanacaktir ] : ");
	scanf("%d",&islem);
	
	printf("\n");
	
	while(islem!=-1){
		
			if(islem==1){
			
				printf("Cekmek istediginiz tutari giriniz : ");
				scanf("%d",&CekilecekTutar);
				
				ParaCekme(CekilecekTutar,pbeslik,ponluk,pyirmilik,pellilik,pyuzluk,pbakiye);
				
			}else if(islem==2){
			
				printf("Yatirmak istediginiz tutari giriniz : ");
				scanf("%d",&YatirilacakTutar);
				
				ParaYatirma(YatirilacakTutar,pbeslik,ponluk,pyirmilik,pellilik,pyuzluk,pbakiye);
				
			}else if(islem==3){
				
				KasaDurumuYazdirma(pbeslik,ponluk,pyirmilik,pellilik,pyuzluk,pbakiye);
				
			}
			
			else
				printf("\nYanlis giris yaptiniz...\n\n");
				
				

		printf("         MENU         \n");
		printf("--------------------------\n");				
		printf("1-Para Cekme \n2-Para Yatirma \n3-Kasayi Gosterme \n");
		printf("Gerceklestirmek istediginiz islemi seciniz[ -1 girilince sistem kapanacaktir ] : ");
		scanf("%d",&islem);
	
		printf("\n");
	
	}
	
		printf("Atm islemini bitirdiniz. Sistem kapatiliyor.");
	
	return 0;
}
