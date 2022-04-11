/*
Bedirhan Kömürcü
11.04.2022
06.41
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int SesliHarfKontrolu(char *ptr, int n){
	
	if(*(ptr+n)=='a' || *(ptr+n)=='i' || *(ptr+n)=='e' || *(ptr+n)=='o' || *(ptr+n)=='u') return 1;
	
	else return 0;
	
}

int SessizHarfKontrolu(char *ptr, int n){
	
	if(*(ptr+n)!='a' && *(ptr+n)!='i' && *(ptr+n)!='e' && *(ptr+n)!='o' && *(ptr+n)!='u') return 1;
	
	else return 0;
	
}

int main(){
	
	int x=0;
	menu:	
	srand(time(NULL));
	
	int harfSayisi=rand()%4+5;
	
	char *nick = (char *)calloc(harfSayisi+1,sizeof(char));
	
	*(nick+harfSayisi)='\n';
	
	int i;
	char gecici;
	
	for(i=0;i<harfSayisi;i++){
		
		if(i==0){

			gecici=rand()%26+97;
			*(nick+i)=gecici;
				
		}else if(i==1){
			
			if(SesliHarfKontrolu(nick,i-1)==1){
				
				gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}else{
				
				gecici=rand()%26+97;
				while(gecici!='a' && gecici!='i' && gecici!='e' && gecici!='o' && gecici!='u') gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}
			
		}else if(i==2){
			
			if(SesliHarfKontrolu(nick,i-1)==1 && SesliHarfKontrolu(nick,i-2)==1){
				
				gecici=rand()%26+97;	
				while(gecici=='a' || gecici=='i' || gecici=='e' || gecici=='o' || gecici=='u') gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}else{
				
				gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}
			
		}else if(i==3){
			
			if(SesliHarfKontrolu(nick,i-1)==1 && SesliHarfKontrolu(nick,i-2)==1){
				
				gecici=rand()%26+97;	
				while(gecici=='a' || gecici=='i' || gecici=='e' || gecici=='o' || gecici=='u') gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}else if(SessizHarfKontrolu(nick,i-1)==1 && SessizHarfKontrolu(nick,i-2)==1){
				
				gecici=rand()%26+97;
				while(gecici!='a' && gecici!='i' && gecici!='e' && gecici!='o' && gecici!='u') gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}else{
				
				gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}
			
		}else if(i==4){
			
			if(SesliHarfKontrolu(nick,i-1)==1 && SesliHarfKontrolu(nick,i-2)==1){
				
				gecici=rand()%26+97;	
				while(gecici=='a' || gecici=='i' || gecici=='e' || gecici=='o' || gecici=='u') gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}else if(SessizHarfKontrolu(nick,i-1)==1 && SessizHarfKontrolu(nick,i-2)==1){
				
				gecici=rand()%26+97;
				while(gecici!='a' && gecici!='i' && gecici!='e' && gecici!='o' && gecici!='u') gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}else{
				
				gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}
			
		}else if(i==5){
			
			if(SesliHarfKontrolu(nick,i-1)==1 && SesliHarfKontrolu(nick,i-2)==1){
				
				gecici=rand()%26+97;	
				while(gecici=='a' || gecici=='i' || gecici=='e' || gecici=='o' || gecici=='u') gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}else if(SessizHarfKontrolu(nick,i-1)==1 && SessizHarfKontrolu(nick,i-2)==1){
				
				gecici=rand()%26+97;
				while(gecici!='a' && gecici!='i' && gecici!='e' && gecici!='o' && gecici!='u') gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}else{
				
				gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}
			
		}else if(i==6){
			
			if(SesliHarfKontrolu(nick,i-1)==1 && SesliHarfKontrolu(nick,i-2)==1){
				
				gecici=rand()%26+97;	
				while(gecici=='a' || gecici=='i' || gecici=='e' || gecici=='o' || gecici=='u') gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}else if(SessizHarfKontrolu(nick,i-1)==1 && SessizHarfKontrolu(nick,i-2)==1){
				
				gecici=rand()%26+97;
				while(gecici!='a' && gecici!='i' && gecici!='e' && gecici!='o' && gecici!='u') gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}else{
				
				gecici=rand()%26+97;
				*(nick+i)=gecici;
				
			}
			
		}	
	}

	
	printf("%s",nick);

	
	free(nick);
	return 0;
}
