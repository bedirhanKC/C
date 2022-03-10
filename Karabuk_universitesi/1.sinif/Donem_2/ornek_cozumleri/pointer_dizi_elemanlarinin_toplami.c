/*
Bedirhan Kömürcü
10.03.2022
22.09
*/

#include<stdio.h>

int main(){
	
	int dizi[10],n,i,toplam=0;
	int *pdizi,*pn,*ptoplam;
	
	pdizi=dizi;
	pn=&n;
	ptoplam=&toplam;
	
	printf(" Bir arraydeki tum elemanlari topla :\n------------------------------------------------\n");
	
	printf("eleman sayisini giriniz(max deger 10 olmali):");
	scanf("%d",pn);
	
	for(i=0 ; i<(*pn) ; i++){
		
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",(pdizi+i));
		
		(*ptoplam)+=(*(pdizi+i));
		
	}
	
	printf("tum elemanlarin toplami : %d",*ptoplam);
	
	
	return 0;
}
