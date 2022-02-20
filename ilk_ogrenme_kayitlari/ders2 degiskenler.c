/*
Ders 2
Temel Degiskenler
int (4 byte = 32 bit) = tam sayi --> %d
char(1 byte = 6 bit ) = harfler ---> %c (%s harf topluluğu)
float = kesirli sayılar -----------> %f
double = kapsamlı kesirli sayılar -> %lf
*/

#include <stdio.h>
int main(){
	
	int sayi;
	sayi=30;
	printf("integer verisi = %d",sayi);
	
	char harf;
	harf='A';
	printf("\nchar verisi = %c",harf);
	
	float kesirli;
	kesirli=5.2;
	printf("\nfloat verisi = %.0f",kesirli);
	
	double uzunKesirli;
	uzunKesirli=5.231465;
	printf("\ndouble verisi = %lf",uzunKesirli);
	
	printf("\ninteger verisi = %d char verisi = %c float verisi = %.1f double verisi = %lf",sayi,harf,kesirli,uzunKesirli);

	
	return 0;
}

