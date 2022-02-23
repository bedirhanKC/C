/*
Bedirhan Kömürcü
23.02.2022
Lab dersi
hafta 2
*/

// 1'den N'e kadar sayilari toplama

#include<stdio.h>

int fonk(int x){
	
	if(x==1){
		
		return 1;
	}
	else{
		
		return x + fonk(x-1);
		
	}

}

int main(){
	
	int sayi;
	
	printf("Dogal sayiyi giriniz:");
	scanf("%d",&sayi);
	
	printf("toplam = %d",fonk(sayi));
	
	
	return 0;
}
