/*
Bedirhan Kömürcü
16.03.2022
22.47
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strrev (char *string)
{
  
  int i,uzunluk=0;
  char gecici;
  
  for(i=0;*(string+i)!='\0';i++,uzunluk++);
  
  for(i=0;i<uzunluk/2;i++){
    
    gecici=*(string+i);
    *(string+i)=*(string+uzunluk-i-1);
    *(string+uzunluk-i-1)=gecici;
    
  }
  
  return string; // reverse the string in place and return it
}


