#include <stdio.h>
int main(){
	
//Koþullu Ýfadeler
//if else
	
	int a;
	a=90;
	if(80>a>50){
		printf("a sayisi 50den buyuktur");
	}
	else if(a>80){
		printf("a sayisi 80den buyuktur");
	}
	else if(a==30){
		printf("a sayisi 30dur");
	}
	else{
		printf("hic bir veri bulunamadi");
	}
	
	
//if else örnek çalýþmasý

	int sayi;
	printf("Bir sayi seciniz: ");
	scanf("%d",&sayi);
	if(sayi%2==0){
		printf("%d sayisi cift sayidir.",sayi);
	}else{
		printf("%d sayisi tek sayidir.",sayi);
	
	}
	
	return 0;
}
