#include<stdio.h>



int main(){
	
	// & -----> de�i�kenin adres bilgisi verir
	// * -----> adresteki de�eri verir 
	
	int i=5;
	
	int *p = &i; //burdaki * i�areti pointer oldu�unu g�sterir. "p" pointer�n ismidir. "*p" bu adres bilgisini tutacak pointer�m�z olur. Yani *p , i'nin adresini tutuyor	
	
	printf("%p",p); //%p pointer�n adresini hexadecimal olarak yazd�rmak i�in kullan�yoruz.
	printf("\n");
	printf("%u",p); //%u poniter�n adresini ondal�kl� say� olarak yazd�rmak i�in kullan�yoruz.
	printf("\n");
	printf("%d",*p); // *'�n yukarda belirtildi�i �zelli�ini kullanarak, asl�nda pointer�n i�indeki de�eri yazd�r�yoruz
	
	
	return 0;
}
