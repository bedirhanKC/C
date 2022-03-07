/*
Bedirhan Kömürcü
07.03.2022
22.02
*/

#include<stdio.h>

void elemanlar(int dizi[],int size){
	
	if(size-1==0) printf("1. eleman : %d\n",dizi[size-1]);
	
	else{
		elemanlar(dizi,size-1);
		printf("%d. eleman : %d\n",size,dizi[size-1]);
	}
	
}

int main(){
	
	int array[5]={1,7,23,21,56};
	
	elemanlar(array,5);
	
}
