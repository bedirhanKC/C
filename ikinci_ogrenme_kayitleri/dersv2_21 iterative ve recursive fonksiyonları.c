#include<stdio.h>

// Iterative fonks. >> yinelemeli
// recursive fonks. >> öz yinelemeli

int faktoriyel(int sayi){
	
	int i,sonuc=1;
	
	for(i=1;i<=sayi;i++){
		sonuc=sonuc * (i);
	}
	
return sonuc;}

int main(){

printf("%d",faktoriyel(6));	
	
return 0;}
