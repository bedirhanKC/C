#include<stdio.h>

int main(){
	
	int x,y;
	
	printf("ilk sayiyi giriniz: ");
	scanf("%d",&x);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&y);
	
	if(x%y==0){
		y=x/y;
		printf("ilk sayi, ikinci sayinin %d katidir.",y);
	}else if(y%x==0){
		x=y/x;
		printf("ikinci sayi, ilk sayinin %d katidir.",x);
	}else{
		printf("iki sayi birbirinin kati degildir.");
	}
	
	
	return 0;
}
