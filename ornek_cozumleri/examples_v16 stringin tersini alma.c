#include<stdio.h>

int main(){
	
	char metin[200],gecici;
	int i,uzunluk=0;
	
	
	printf("Bir metin giriniz: ");
	gets(metin);
	
	for(i = 0 ; metin[i] != '\0' ;i++){
		uzunluk++;
	}
	
	for(i=0;i<uzunluk/2;i++){
		gecici=metin[i];
		metin[i]=metin[uzunluk-1-i];
		metin[uzunluk-1-i]=gecici;
	}
	
	printf("\nMetnin tersi:%s",metin);
	
	
return 0;}
