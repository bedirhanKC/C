#include<stdio.h>

//Fonksiyonlarda array kullan�m�yla ilgili;

int carp(int sayilar[],int size){ //size at�yoruz ��nk� dizinin boyutunu fonksiyon b�yle alabiliyor.

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
