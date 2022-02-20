#include<stdio.h>

int main(){
	
	int sayi;
	printf("bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi>0){
		sayi=sayi*sayi;
		printf("sayinin karesi = %d",sayi);
	}else{
		printf("sifirdan kucuk deger girdiniz. ");
	}
	
	return 0;
}
