#include<stdio.h>

int main(){
	
	
	//Find the frequency of a character in a string
	//Bir dizedeki bir karakterin sýklýðýný bulun

	char metin[200];
	int i,uzunluk=0;
	
	printf("Bir metin giriniz:");
	gets(metin);
	
	for(i=0;metin[i]!='\0';i++){
		uzunluk++;
	}
	
	printf("\nMetnin uzunlugu %d karakterdir",uzunluk);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
