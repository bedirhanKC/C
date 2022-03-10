/*
Bedirhan Kömürcü
10.03.2022
14.41
*/

#include<stdio.h>

int main(){
	
	char str[500];
	char *pstr;
	int sesli=0,sessiz=0,i;
	int *psesli,*psessiz;
	
	pstr=str;
	psesli=&sesli;
	psessiz=&sessiz;
	
	printf(" Sesli ve sessiz harfleri say :\n---------------------------------------------\n");
	
	printf("Bir string giriniz (kullanilan karakterler sessiz sayilacaktir) :");
	gets(pstr);
	
	for(i=0 ; *(pstr+i)!='\0' ; i++){
		
		if(*(pstr+i)=='a' || *(pstr+i)=='A' || *(pstr+i)=='u' || *(pstr+i)=='U' || *(pstr+i)=='e' || *(pstr+i)=='E' || *(pstr+i)=='I' || *(pstr+i)=='i' || *(pstr+i)=='O' || *(pstr+i)=='o'){
			
			(*psesli)++;
			
		}else{
			(*psessiz)++;
		}
	}
	
	printf("\nSesli harf sayisi : %d",*psesli);
	printf("\nSessiz harf sayisi : %d",*psessiz);

	
	return 0;
}
