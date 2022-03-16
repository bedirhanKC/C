/*
Bedirhan Kömürcü
16.03.2022
Hafta 6
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,n,max;
	
	printf("Bir eleman sayisi giriniz: ");
	scanf("%d",&n);
	
	int *ptr=(int *)calloc(n,sizeof(int)); //kullanýcýnýn girdiði deger boyutunda bir alan açýyorum
	
	for(i=0;i<n;i++){
		
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",ptr+i);						//dizinin elemanlarýný alýyorum
		
	}
	
	max=*(ptr); //dizinin ilk degerini maksimuma atýyorum
	
	for(i=0;i<n;i++){
		
		if(max<= *(ptr+i)) max = *(ptr+i); //büyük deger kontrolü yapýyorum
		
	}
	
	printf("\nEn buyuk deger %d'dir \n",max);
	
	return 0;
}
