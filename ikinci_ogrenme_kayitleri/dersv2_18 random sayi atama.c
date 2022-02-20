#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int rastgelesayi,i;

	srand(time(NULL)); //Bu da her çalýþtýrmada random sayýyý sýfýrlamaya yarýyor.
	
	rastgelesayi= rand(); //Bu komut "rastgelesayi" deðiþkenine rastgele bir sayý atamanýza yarýyor.
	
	rastgelesayi=0;
	
	for(i=0;rastgelesayi!=31;i++){
		rastgelesayi=rand()%10+25; //50ye kadar random
		if(rastgelesayi==0){
			rastgelesayi++;
		}
		printf("%d\n",rastgelesayi);
	}	
	
	printf("\n---------------------\n\n%d. denemede 31i buldunuz.",i);
	
	
	return 0;
}
