/*
Bedirhan Kömürcü
2010206036
lab hafta 9
*/

#include<stdio.h>

struct toplama{
	
	int sayi1;
	int sayi2;
	
}toplama;

main(){
	
	printf("1. sayiyi giriniz:");
	scanf("%d",&toplama.sayi1);
	printf("2. sayiyi giriniz:");
	scanf("%d",&toplama.sayi2);
	
	printf("toplam:%d",toplama.sayi1+toplama.sayi2);
	
}
