/*
Bedirhan Kömürcü
10.03.2022
14.32
*/

#include<stdio.h>

int main(){
	
	int x,y;
	int *px,*py;
	
	px=&x;
	py=&y;
	
	printf("iki sayidan en buyugunu bulunuz :\n---------------------------------------------\n");
	
	printf("x degerini giriniz: ");
	scanf("%d",px);
	printf("y degerini giriniz: ");
	scanf("%d",py);
	
	if(*px<*py) printf("\nEn buyuk sayi %d \n",*py);
	else if(*px==*py) printf("\nIki sayi birbirine esittir. \n");
	else printf("\nEn buyuk sayi %d \n",*px);

	
	return 0;
}
