/*
Bedirhan Kömürcü
10.4.2022
01.27
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

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
			
			gecici=rand()%26+97;
			
			if(*(nick+i-1)=='a' || *(nick+i-1)=='i' || *(nick+i-1)=='e' || *(nick+i-1)=='o' || *(nick+i-1)=='u' ){
				
				while(gecici=='a' || gecici=='i' || gecici=='e' || gecici=='o' || gecici=='u') gecici=rand()%26+97;
				
			}else{
				
				gecici=rand()%26+97;
				
				while(gecici!='a' && gecici!='i' && gecici!='e' && gecici!='o' && gecici!='u') gecici=rand()%26+97;
				
			}
			
			*(nick+i)=gecici;
			
		}else if(i==2){
		
			gecici=rand()%26+97;
			*(nick+i)=gecici;
				
		}else if(i==3){
			
			gecici=rand()%26+97;
			
			if(*(nick+i-1)=='a' || *(nick+i-1)=='i' || *(nick+i-1)=='e' || *(nick+i-1)=='o' || *(nick+i-1)=='u' ){
				
				while(gecici=='a' || gecici=='i' || gecici=='e' || gecici=='o' || gecici=='u') gecici=rand()%26+97;
				
			}else{
				
				gecici=rand()%26+97;
				
				while(gecici!='a' && gecici!='i' && gecici!='e' && gecici!='o' && gecici!='u') gecici=rand()%26+97;
				
			}
			
			*(nick+i)=gecici;
			
		}else if(i==4){
		
			gecici=rand()%26+97;
			*(nick+i)=gecici;
				
		}else if(i==5){
			
			gecici=rand()%26+97;
			
			if(*(nick+i-1)=='a' || *(nick+i-1)=='i' || *(nick+i-1)=='e' || *(nick+i-1)=='o' || *(nick+i-1)=='u' ){
				
				while(gecici=='a' || gecici=='i' || gecici=='e' || gecici=='o' || gecici=='u') gecici=rand()%26+97;
				
			}else{
				
				gecici=rand()%26+97;
				
				while(gecici!='a' && gecici!='i' && gecici!='e' && gecici!='o' && gecici!='u') gecici=rand()%26+97;
				
			}
			
			*(nick+i)=gecici;
			
		}else{
		
			gecici=rand()%26+97;
			*(nick+i)=gecici;
				
		}
		
		
		
	}
	
	printf("%s",nick);

	
	free(nick);
	return 0;
}
