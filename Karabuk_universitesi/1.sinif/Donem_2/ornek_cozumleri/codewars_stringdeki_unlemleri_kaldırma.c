/*
Bedirhan Kömürcü
16.03.2022
22.59
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

// Write resulting string into buffer pointed by str_out

void remove_exclamation_marks(const char *str_in, char *str_out) {
  
  int i,k=0;
  
  for(i=0;*(str_in+i)!='\0';i++){
    
    while(*(str_in+i)=='!') i++;
    
    *(str_out+k)=*(str_in+i);
    k++;
    
  }
  
    *(str_out+k)='\0';
}

int main(){
	
	
	char str2[50],str1[]="deneme!! metini!";
	char *pstr2,*pstr1;
	
	pstr1=str1;
	pstr2=str2;
	
	remove_exclamation_marks(pstr1,pstr2);
	
	printf("%s",pstr2);
	
	
	
	
}
