/*
Bedirhan Kömürcü
15.03.2022
23.52
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int dizi1[5]={1,3,11,24,32};
	int dizi2[7]={2,4,7,12,42,44,67};
	
	int *pdizi3,*pdizi2,*pdizi1,i,j=0,k=0;
	
	pdizi2=dizi2;
	pdizi1=dizi1;
	
	pdizi3=(int *)malloc(12*sizeof(int));
	
	for(i=0;i<12;i++){
		
		if( *(pdizi1+j) < *(pdizi2+k) && j<5 ) {
			
			*(pdizi3+i)=*(pdizi1+j);
			j++;
			
		}else{
			
			*(pdizi3+i)=*(pdizi2+k);
			k++;
		}
		
	}
	
	for(i=0;i<12;i++){
		
		printf("%d. eleman %d'dir \n",i+1,*(pdizi3+i));
		
	}
	
return 0;	
}
