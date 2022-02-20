#include<stdio.h>
#include<stdlib.h>

int main(){
	
	
	
	/* Dinamik bellek fonksiyonlar� */
	
	// malloc :  alan ay�r�l�r ve alandaki de�i�kenlere/yap�lara dokunulmaz. -> memory allocation
	// calloc : alan ay�r�l�r ama alandaki de�erler s�f�rlan�r. --------------> clear allocation
	
	int *alan1 = malloc(10*sizeof(int)); // "haf�zada 30 tane int boyutunda yer ay�r."
	
	int *alan2 = calloc(10,sizeof(int)); 


	int i=0;

	for(;i<10;i++){
		
		printf("alan1[%d]:%d \nalan2[%d]:%d\n\n",i,alan1[i],i,alan2[i]);
		
	}
	
	alan1 = realloc(alan1,6*sizeof(int)); //alan� yeniden boyutland�r�yor.
	
	free(alan1);
	free(alan2); //ay�r�lan alan� tekrardan bilgisayara geri veriyoruz.
	
	
return 0;}
