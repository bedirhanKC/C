/*
Bedirhan Kömürcü
2010206036
lab hafta 8
*/

//str fonksiyonlarý

#include<stdio.h>
#include<string.h>

int main(){
	
	char isim[10];
	char soyisim[8];
	
	strcpy(isim,"bedirhan ");
	strcpy(soyisim,"komurcu");
	
	if(strcmp(isim,soyisim)<0) printf("isim, soy isimden daha kucuk");
	else if(strcmp(isim,soyisim)>0) printf("isim, soy isimden daha buyuk");
	else printf("isim, soy isime esit");
	
	printf("\n");
	
	strcat(isim,soyisim);
	
	printf("\"%s\" metninin uzunlugu %d'dir",isim,strlen(isim));
	
	return 0;
}
