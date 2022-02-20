#include<stdio.h>

//Fonksiyonlarda string kullanýmýyla ilgili;

int uzunlukdon(char name[]){
	
	int uzunluk=0,i;
	
	for(i=0;name[i]!='\0';i++){
		uzunluk++;
	}
	
	return uzunluk;
}
	
int main(){

	char isim[]="Bedirhan";
	
	printf("%d",uzunlukdon(isim));
	
return 0;
}
