#include<stdio.h>

int main(){
	
	
	int sayac,nott,toplam=0,os;
	float ort;
	
	printf("ogrenci sayisini giriniz:");
	scanf("%d",&os);
	
	for(sayac=1;sayac<=os;sayac++){
		
		printf("%d. ogrencisinin not ortalamasini giriniz:",sayac);
		scanf("%d",&nott);
		toplam+=nott;
	}
	
	ort=(float)toplam/(float)os;
	 
	printf("\nsinif ortalamasi=%.2f",ort);
	
	
	return 0;
}
