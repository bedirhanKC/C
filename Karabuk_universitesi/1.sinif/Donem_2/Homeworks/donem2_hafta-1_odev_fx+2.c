/*
Bedirhan Kömürcü
24.02.2022
00.10
*/

#include<stdio.h>

int fonk(int x){
	
	if(x <= 0) return 0;
	
	else return fonk(x-1)+2;
	
}

int main(){
	
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	printf("toplam=%d",fonk(sayi));
	
	return 0;
}
