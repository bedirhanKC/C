#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int rastgelesayi,i;

	srand(time(NULL)); //Bu da her �al��t�rmada random say�y� s�f�rlamaya yar�yor.
	
	rastgelesayi= rand(); //Bu komut "rastgelesayi" de�i�kenine rastgele bir say� ataman�za yar�yor.
	
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
