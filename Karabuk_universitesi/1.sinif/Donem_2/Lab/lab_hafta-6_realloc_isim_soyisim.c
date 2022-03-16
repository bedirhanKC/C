/*
Bedirhan Kömürcü
16.03.2022
Hafta 6
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char *ptr=(char *)malloc(8*sizeof(char));
	
	printf("isim : ");
	gets(ptr);
	
	*(ptr+8)=' ';
	
	ptr=realloc(ptr,17);
	
	printf("soyisim : ");
	gets(ptr+9);
	
	printf("\nsonuc: %s",ptr);
	
	
	
	return 0;
}
