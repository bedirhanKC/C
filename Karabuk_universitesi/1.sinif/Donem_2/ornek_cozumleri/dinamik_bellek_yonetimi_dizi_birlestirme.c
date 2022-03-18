/*
Bedirhan Kömürcü
18.03.2022
20.13	
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n1,n2,i,j=0;
	int *ptr1,*ptr2,*ptr3;
	
	printf("1. dizinin boyutunu giriniz : ");
	scanf("%d",&n1);
	
	printf("2. dizinin boyutunu giriniz : ");
	scanf("%d",&n2);
	
	ptr1=(int *)calloc(n1,sizeof(int));	
	ptr2=(int *)calloc(n2,sizeof(int));
	ptr3=(int *)calloc(n1+n2,sizeof(int));
	
	printf("\n");
	
	for(i=0;i<n1;i++,j++){
		
		printf("1. dizinin %d. elemanini giriniz : ",i+1);
		scanf("%d",ptr1+i);
		
		*(ptr3+j)=*(ptr1+i);
		
	}
	
	printf("\n");
	
	for(i=0;i<n2;i++,j++){
		
		printf("2. dizinin %d. elemanini giriniz : ",i+1);
		scanf("%d",ptr2+i);
		
		*(ptr3+j)=*(ptr2+i);
	}
	
	printf("\nBirlestirilmis dizi\n-------------------------------\n");

	for(i=0;i<n1+n2;i++){
		
		printf("%d eleman : %d\n",i+1,*(ptr3+i));
		
	}

	

return 0;	
}
