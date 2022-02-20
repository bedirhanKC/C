#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int rastgelesayi,i;

	srand(time(NULL)); //Bu da her çalıştırmada random sayıyı sıfırlamaya yarıyor.
	
	rastgelesayi= rand(); //Bu komut "rastgelesayi" değişkenine rastgele bir sayı atamanıza yarıyor.
	
	rastgelesayi=0;
	
	for(i=0;rastgelesayi!=11;i++){
		
		rastgelesayi=rand()%50+1; //50ye kadar random
		
		if(rastgelesayi==0){
			rastgelesayi++;
		}
		
		printf("%d\n",rastgelesayi);
	}	
	
	printf("\n---------------------\n\n%d. denemede 11'i buldunuz.",i);
	
	
	return 0;
}
