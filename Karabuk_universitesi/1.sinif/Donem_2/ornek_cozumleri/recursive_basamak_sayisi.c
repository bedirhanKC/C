/*
Bedirhan Kömürcü
07.03.2022
21.54
*/

#include<stdio.h>

int basamak_sayisi(int x){
	
	if(x<10) return 1;
	
	else return 1+basamak_sayisi(x/10);
	
}

int main(){
	
	int sayi,BasamakSayisi;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	BasamakSayisi=basamak_sayisi(sayi);
	
	printf("Bamasak sayisi : %d",BasamakSayisi);
	
	return 0;
}

