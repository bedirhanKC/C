#include<stdio.h>



int main(){
	
	// & -----> deðiþkenin adres bilgisi verir
	// * -----> adresteki deðeri verir 
	
	int i=5;
	
	int *p = &i; //burdaki * iþareti pointer olduðunu gösterir. "p" pointerýn ismidir. "*p" bu adres bilgisini tutacak pointerýmýz olur. Yani *p , i'nin adresini tutuyor	
	
	printf("%p",p); //%p pointerýn adresini hexadecimal olarak yazdýrmak için kullanýyoruz.
	printf("\n");
	printf("%u",p); //%u poniterýn adresini ondalýklý sayý olarak yazdýrmak için kullanýyoruz.
	printf("\n");
	printf("%d",*p); // *'ýn yukarda belirtildiði özelliðini kullanarak, aslýnda pointerýn içindeki deðeri yazdýrýyoruz
	
	
	return 0;
}
