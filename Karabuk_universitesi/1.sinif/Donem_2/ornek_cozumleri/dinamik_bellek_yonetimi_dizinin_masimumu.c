/*
Bedirhan Kömürcü
18.03.2022
20.01
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,max,i;
	int *ptr,*pmax;
	
	pmax=&max;
	
	printf("Bir dizi boyutu giriniz : ");
	scanf("%d",&n);	
	
	ptr=(int *)calloc(n,sizeof(int));
	
	for(i=0;i<n;i++){
		
		printf("%d. elemani giriniz : ",i+1);
		scanf("%d",ptr+i);
		
	}
	
	*pmax=*(ptr);
	
	for(i=0;i<n;i++){
		
		if(*(pmax)<=*(ptr+i)) *(pmax)=*(ptr+i);
		
	}
	
	printf("\nEn buyuk eleman %d'dir",*(pmax));
	
	return 0;
}
