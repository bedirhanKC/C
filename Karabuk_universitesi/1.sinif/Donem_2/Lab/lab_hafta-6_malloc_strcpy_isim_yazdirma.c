/*
Bedirhan Kömürcü
16.03.2022
Hafta 6
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char str[]="bedirhan komurcu";
	char *pstr=str;
	
	char *ptr=(char *)malloc(17*sizeof(char));
	
	strcpy(ptr,pstr);
	
	printf("%s",ptr);
	
	
	return 0;
}
