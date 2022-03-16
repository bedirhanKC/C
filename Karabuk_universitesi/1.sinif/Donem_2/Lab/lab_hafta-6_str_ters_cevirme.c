/*
Bedirhan Kömürcü
16.03.2022
Hafta 6
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int i,uzunluk=0;
	char gecici;
	
	char *ptr=(char *)malloc(50);
	
	printf("bir metin giriniz : ");
	gets(ptr);
	
	for(i=0;*(ptr+i)!='\0';i++,uzunluk++);
	
	ptr=realloc(ptr,uzunluk);
	
	for(i=0;i<uzunluk/2;i++){
		
		gecici=*(ptr+i);
		*(ptr+i)=*(ptr+uzunluk-i-1);
		*(ptr+uzunluk-i-1)=gecici;
		
	}
	
	printf("\nTers cevrilmis metin\n------------------------\n");
	printf("%s",ptr);
	
	return 0;
}
