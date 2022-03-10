/*
Bedirhan Kömürcü
10.03.2022
14.37
*/

#include<stdio.h>

int main(){
	
	int x,i,fakt=1;
	int *px,*pfakt;
		
	px=&x;
	pfakt=&fakt;
	
	printf("Sayinin fakroriyelini bul :\n---------------------------------------------\n");
	
	printf("sayi degerini giriniz: ");
	scanf("%d",px);

	for(i=1;i<=*px;i++){
		
		*pfakt= (*pfakt)*i;
		
	}

	printf("%d! = %d",*px,*pfakt);
	
	return 0;
}
