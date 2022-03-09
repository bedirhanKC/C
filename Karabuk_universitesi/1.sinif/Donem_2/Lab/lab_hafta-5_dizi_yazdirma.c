/*
Bedirhan Kömürcü
09.03.2022
Hafta 5
*/

#include<stdio.h>

int main(){
	
	int n;
	
	printf("Bir n degeri giriniz:");
	scanf("%d",&n);
	
	int i,dizi[n];
	int *pdizi;
	
	pdizi=dizi;
	
	printf("\n");
	
	for(i=0 ;i<n ;i++){
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",pdizi+i);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("%d. eleman = %d\n",i+1,*(pdizi+i));
	}
		
	return 0;
}
