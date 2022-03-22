/*
Bedirhan Kömürcü
22.03.2022
23.32
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	//bedirhan

	char *ptr=(char *)malloc(9*sizeof(char));
	
	strcpy(ptr,"Bedirhan\0");
	
	//2010206039 --> 23 (basamaklarý toplamý)
	
	ptr=realloc(ptr,23*sizeof(char));
	
	int i;
	
	for(i=0;i<23/8;i++){
		
		strcpy(ptr+(8*i),"Bedirhan");
		
	}
	
	strcpy(ptr+(8*i),"\0");
	
	printf("%s",ptr);
	
	free(ptr);
	
}
