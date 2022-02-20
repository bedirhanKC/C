#include<stdio.h>

int main(){
	int x,y;
	
	printf("ilk sayiyi giriniz: ");
	scanf("%d",&x);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&y);
	
	if(x>y){
		printf("buyuk olan sayi %d'dir.",x);
	}else if(y>x){
		printf("buyuk olan sayi %d'dir.",y);
	}else{
		printf("iki deger birbirine esittir.");
	}
return 0;}
