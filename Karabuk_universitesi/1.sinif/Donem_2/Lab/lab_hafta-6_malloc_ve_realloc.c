/*
Bedirhan Kömürcü
16.03.2022
Hafta 6
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int n1,n2,i;
	
	printf("dizinin boyutunu giriniz: ");
	scanf("%d",&n1);
	
	int *pdizi=(int *)malloc(n1*sizeof(int));
	
	for(i=0;i<n1;i++){
		
		printf("%d. elemani giriniz : ",i+1);
		scanf("%d",pdizi+i);
		
	}
	
	printf("yeni alanin boyutunu giriniz : ");
	scanf("%d",&n2);
	
	pdizi=realloc(pdizi,(n2)*sizeof(int));
	
	for(i=n1;i<n2;i++){
		
		printf("%d. elemani giriniz : ",i+1);
		scanf("%d",pdizi+i);
		
	}
	
	printf("\n---------------------------\n\n");
	
	for(i=0;i<n2;i++){
		
		printf("%d. eleman %d'dir \n",i+1,*(pdizi+i));
		
	}
	
	return 0;
}
