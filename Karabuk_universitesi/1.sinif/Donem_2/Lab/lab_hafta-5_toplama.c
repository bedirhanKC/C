/*
Bedirhan Kömürcü
09.03.2022
Hafta 5
*/

#include<stdio.h>

int main(){
	
	int *px,*py;
	int x,y;
	
	px=&x;
	py=&y;
	
	printf("x degerini giriniz: ");
	scanf("%d",px);
	printf("y degerini giriniz: ");
	scanf("%d",py);
	
	*px=*px+*py;
	
	printf("\nToplam:%d",*px);
	
	
	
	
	
	return 0;
}
