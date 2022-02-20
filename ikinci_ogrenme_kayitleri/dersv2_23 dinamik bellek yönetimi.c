#include<stdio.h>
#include<stdlib.h>

int main(){
	
	
	
	/* Dinamik bellek fonksiyonlarý */
	
	// malloc :  alan ayýrýlýr ve alandaki deðiþkenlere/yapýlara dokunulmaz. -> memory allocation
	// calloc : alan ayýrýlýr ama alandaki deðerler sýfýrlanýr. --------------> clear allocation
	
	int *alan1 = malloc(10*sizeof(int)); // "hafýzada 30 tane int boyutunda yer ayýr."
	
	int *alan2 = calloc(10,sizeof(int)); 


	int i=0;

	for(;i<10;i++){
		
		printf("alan1[%d]:%d \nalan2[%d]:%d\n\n",i,alan1[i],i,alan2[i]);
		
	}
	
	alan1 = realloc(alan1,6*sizeof(int)); //alaný yeniden boyutlandýrýyor.
	
	free(alan1);
	free(alan2); //ayýrýlan alaný tekrardan bilgisayara geri veriyoruz.
	
	
return 0;}
