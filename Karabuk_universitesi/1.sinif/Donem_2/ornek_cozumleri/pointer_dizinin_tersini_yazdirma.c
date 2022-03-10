/*
Bedirhan Kömürcü
10.03.2022
22.27
*/

#include<stdio.h>

int main(){
	
	int dizi[10],i,n;
	int *pdizi,*pn;
	
	pdizi=dizi;
	pn = &n;
	
	printf("Array'in elemanlarini ters sirada yazdir :\n----------------------------------------------------------------\n");
	
	printf("eleman sayisini giriniz:");
	scanf("%d",pn);
	
	printf("\n");
	
	for(i=0 ; i<*pn ; i++){
		
		printf("%d elemani giriniz:",i+1);
		scanf("%d",pdizi+i);
		
	}
	
	printf("\nDizin Tersi:\n");
	
	for(i=0 ; i<*pn ; i++){
		
		printf("%d. eleman = %d\n",i+1,*(pdizi+n-1-i));
		
	}
	
	return 0;
}
