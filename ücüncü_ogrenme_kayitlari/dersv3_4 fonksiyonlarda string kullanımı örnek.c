#include<stdio.h>
#include<string.h>

void terscevir(char dizi[]){
	
	int i,gecici,uzunluk;
	
	uzunluk = strlen(dizi);
	
	for(i=0;i<uzunluk/2;i++){
		gecici=dizi[i];
		dizi[i]=dizi[uzunluk-1-i];
		dizi[uzunluk-1-i]=gecici;
		
	}
	
}

int main(){
	
	char metin[200];
	
	printf("Bir metin giriniz:");
	
	gets(metin);
	
	terscevir(metin);
	
	printf("girdiginiz metnin tersi: %s",metin);
	
	
	
	
	
	
	
	
	
	return 0;
}
