/*
Bedirhan Kömürcü
23.02.2022
Lab dersi
hafta 2
*/


#include<stdio.h>

int fonk(int x){
	
	if(x<=0){
		
		return x;
	}
	else{
		
		return (x%10)+fonk(x/10);
	}
	
	
	
}

int main(){
	
	int sayi;
	
	printf("Dogal sayiyi giriniz:");
	scanf("%d",&sayi);
	printf("toplam : %d",fonk(sayi));
	
	
	
	return 0;
}
