/*
Bedirhan Kömürcü
11.04.2022
09.03
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	// bubble sort
	
	// 13 7 11 3 4
	// 7 11 3 4 13
	
	int i,j,gecici;
	int dizi[5]={13,7,11,3,4};	
	int *pdizi;
	
	pdizi=dizi;
	
	for(i=0;i<4;i++){
		
		for(j=0;j<4;j++){
			
			if(*(pdizi+j)>=*(pdizi+j+1)){
				
				gecici=*(pdizi+j+1);
				*(pdizi+j+1)=*(pdizi+j);
				*(pdizi+j)=gecici;
				
			}		
		}				
	}
	 
	for(i=0;i<5;i++){
		printf("%d ",*(pdizi+i));
	}
	
	
	
	return 0;
}
