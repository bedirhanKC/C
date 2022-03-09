/*
Bedirhan Kömürcü
09.03.2022
Hafta 5
*/

#include<stdio.h>

int main(){
	
	char str[500],*pstr,gecici;
	int i,uzunluk=0;
	
	pstr=str;
	
	printf("Ters cevirilecek metini giriniz: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++) uzunluk++;
	
	for(i=0;i<uzunluk/2;i++){
		
		gecici=str[i];
		str[i]=str[uzunluk-i-1];
		str[uzunluk-i-1]=gecici;

		
	}	
	
	printf("%s",pstr);

}
