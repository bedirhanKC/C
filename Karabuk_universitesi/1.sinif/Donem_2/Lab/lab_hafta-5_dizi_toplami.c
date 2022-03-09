/*
Bedirhan Kömürcü
09.03.2022
Hafta 5
*/

#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("Bir N degeri giriniz(max 10):");
	scanf("%d",&n);
	
	int dizi[n],*pdizi,toplam=0,*ptoplam;
	
	pdizi=dizi;
	ptoplam=&toplam;
	
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",(pdizi+i));
		*ptoplam+=*(pdizi+i);	
	}
	
	
	printf("\nToplam : %d",*ptoplam);
	
	return 0;
}
