#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

		//Pointerler

	int a=10;
	int b;
	int *pointerA=&a;
	int *pointerB=&b;
	
	
	printf("%x\n",pointerA);
	printf("%x",pointerB);
	

			//Pointer kullanarak adresi deðiþtirme:
	int sayi=60;
	int *pointer=&sayi;
	pointer++;
	printf("%u",pointer);
	
	
		//hexadecimal(16lýk) gösterimi:
	char harf='A';
	int *pointer=&harf;
	printf("%x",pointer);
	
	
		//Dizilerde pointer:
	int dizi[50];
	int *pointer=&dizi[3];
	printf("%u",pointer);
	
	int dizi[50];
	int *pointer=&dizi[3];
	printf("%u",pointer);

return 0;}
