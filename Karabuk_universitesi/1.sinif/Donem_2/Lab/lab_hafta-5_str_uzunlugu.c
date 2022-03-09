/*
Bedirhan Kömürcü
09.03.2022
Hafta 5
*/

#include<stdio.h>

int main(){
	
	int i,uzunluk=0;
	char *pstr,str[500];
	
	pstr=str;
	
	printf("Bir metin giriniz:");
	gets(pstr);
	
	for(i=0;*(pstr+i)!='\0';i++) uzunluk++;
	
	printf("\nMetnin uzunlugu : %d", uzunluk);
	
	return 0;
}
