/*
Bedirhan Kömürcü
07.03.2022
22.11
*/

#include<stdio.h>

int BasamakToplami(int x){
	
	if(x<10) return x;
	
	else return (x%10)+BasamakToplami(x/10);
	
}

int main(){
	
	int a=3/2;
	
	printf("%d",a);
	
	return 0;
}
