/*
Bedirhan Kömürcü
02.03.2022
20.26
*/


#include<stdio.h>

int fak(int x){
	
	if(x<=1) return 1;
	
	else return x*fak(x-1);
	
}

int main(){
	
	
	int sayi,fakt;
	
	printf("Sayi degerini giriniz:");
	scanf("%d",&sayi);
	
	fakt=fak(sayi);
	
	printf("%d! = %d",sayi,fakt);

return 0;
}
