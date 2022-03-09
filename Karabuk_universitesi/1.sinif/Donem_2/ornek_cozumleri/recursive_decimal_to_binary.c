/*
Bedirhan Kömürcü
07.03.2022
22.25
*/

#include<stdio.h>

int DecToBin(int sayi){
	
	if(sayi==0) return 1;
	else if(sayi==1) return 0;
	
	else{
		return (sayi%2)*10+DecToBin(sayi/2);
	}
	
}

int main(){
	
	int sayi;
	
	printf("Bir ondalik sayi giriniz: ");
	scanf("%d",&sayi);
	
	printf("sonuc : %d",DecToBin(sayi));
	
	return 0;
}
