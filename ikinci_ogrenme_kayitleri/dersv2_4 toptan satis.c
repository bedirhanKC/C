#include<stdio.h>

int main(){
	
float sayi;
menu:printf("urunden kac adet alacaginizi giriniz: ");
scanf("%f",&sayi);

	if(sayi>=400){
	sayi=sayi*6.5;
	printf("toplam fiyat:%.2f",sayi);
	}
	else if(sayi>=350 && sayi<400){
	sayi=sayi*7;
	printf("toplam fiyat:%.2f",sayi);	
	}
	else if(sayi>=300 && sayi<350){
	sayi=sayi*7.5;
	printf("toplam fiyat:%.2f",sayi);
	}
	else if(sayi>=250 && sayi<300){
	sayi=sayi*8;
	printf("toplam fiyat:%.2f",sayi);
	}
	else if(sayi>=200 && sayi<250){
	sayi=sayi*8.5;
	printf("toplam fiyat:%.2f",sayi);
	}
	else if(sayi>=150 && sayi<200){
	sayi=sayi*9;
	printf("toplam fiyat:%.2f",sayi);
	}
	else if(sayi>=100 && sayi<150){
	sayi=sayi*9.5;
	printf("toplam fiyat:%.2f",sayi);
	}
	else if(sayi>0 && sayi<100){
	sayi=sayi*10;
	printf("toplam fiyat:%.2f",sayi);
	}
	else{
	printf("yanlis giris yaptiniz.\nLutfen 0'dan buyuk bir sayi girisi yapiniz.");
	goto menu;}				
return 0;}
