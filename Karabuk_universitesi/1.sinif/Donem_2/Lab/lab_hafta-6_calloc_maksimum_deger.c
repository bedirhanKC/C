/*
Bedirhan K�m�rc�
16.03.2022
Hafta 6
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,n,max;
	
	printf("Bir eleman sayisi giriniz: ");
	scanf("%d",&n);
	
	int *ptr=(int *)calloc(n,sizeof(int)); //kullan�c�n�n girdi�i deger boyutunda bir alan a��yorum
	
	for(i=0;i<n;i++){
		
		printf("%d. elemani giriniz:",i+1);
		scanf("%d",ptr+i);						//dizinin elemanlar�n� al�yorum
		
	}
	
	max=*(ptr); //dizinin ilk degerini maksimuma at�yorum
	
	for(i=0;i<n;i++){
		
		if(max<= *(ptr+i)) max = *(ptr+i); //b�y�k deger kontrol� yap�yorum
		
	}
	
	printf("\nEn buyuk deger %d'dir \n",max);
	
	return 0;
}
