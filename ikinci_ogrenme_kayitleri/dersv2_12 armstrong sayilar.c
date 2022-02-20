#include<stdio.h>

int main(){

		int sayi,i,toplam,kalan;

	printf("Bu sistemin amaci armstrong olan sayilari bulmaktir.\n-1 verisi girilene kadar sistem kapanmayacaktir.\n");
menu:
	toplam=0;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
i=sayi;

	if(sayi==-1){
		return 0;
	}
	
	while(i!=0){
		
	kalan=i%10;
	toplam+=kalan*kalan*kalan;
	i/=10;				
	}
	
	if(toplam==sayi){
		printf("\n%d sayisi armstrong sayidir.\n\n",sayi);
	}else{
		printf("\n%d sayisi armstrong sayi degildir.\n\n",sayi);
	}
	
goto menu;}
