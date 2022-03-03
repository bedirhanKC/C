/*
Bedirhan Kömürcü
03.03.2022
23.12
Hafta 3 lab
*/

#include<stdio.h>

int tek(int dizi[], int size){
	
	if(size-1==0){
		if(dizi[0]%2==0) return 0;
		else return 1;
	}
	
	else{
		
		if(dizi[size-1]%2==0) return 0+tek(dizi,size-1);
		else return 1+tek(dizi,size-1);
		
	}
	
}

int main(){
	
	
	int arr[5]={1,3,4,6,7};
	
	
	printf("tek sayi sayisi:%d",tek(arr,5));
	
	
	return 0;
}
