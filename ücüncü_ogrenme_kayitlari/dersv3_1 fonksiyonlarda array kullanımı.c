#include<stdio.h>

//Fonksiyonlarda array kullanýmýyla ilgili;

int carp(int sayilar[],int size){ //size atýyoruz çünkü dizinin boyutunu fonksiyon böyle alabiliyor.

	int carpim=1;
	
	int i;
	
	for(i=0;i<size;i++){
		carpim*=sayilar[i];
	}
	
	
return carpim;
}

int main(){
	
	
	int sayilar[5] = {1,2,3,4,5};
	
	
	printf("%d",carp(sayilar,5));
	
	
	
	
	
	
return 0;
}
