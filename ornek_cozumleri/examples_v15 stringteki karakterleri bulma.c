#include<stdio.h>

int main(){
	
	
	char metin[200];
	int i,uzunluk=0,sesliHarf=0,sessizHarf=0,bosluk=0,rakam=0,bilinmeyenKarakter=0;
	
	printf("Bir metin giriniz[turkce karakter algilanamaz]:");
	gets(metin);
	
	for(i=0;metin[i]!='\0';i++){
		
		uzunluk++;
		
		if(metin[i] == 'a' || metin[i] == 'e' || metin[i] == 'i' ||
        metin[i] == 'o' || metin[i] == 'u'){
        	sesliHarf++;
		}
		else if(metin[i]<='z' && metin[i]>='a'){
			sessizHarf++;
		}
		else if(metin[i]>='0' && metin[i]<='9'){
			rakam++;
		}else if(metin[i] == ' '){
			bosluk++;
		}else{
			bilinmeyenKarakter++;
		}
		
	}

	printf("\ntoplam karakter sayisi:%d",uzunluk);
	printf("\nSesli harf sayisi:%d",sesliHarf);
	printf("\nSessiz harf sayisi:%d",sessizHarf);
	printf("\nRakam sayisi:%d",rakam);
	printf("\nBosluk sayisi:%d",bosluk);
	printf("\nBilinmeyen karakter sayisi:%d",bilinmeyenKarakter);

	
	
	
	
	
	
	
	
	
	
	
	
return 0;}
