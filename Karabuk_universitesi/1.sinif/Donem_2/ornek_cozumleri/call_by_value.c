/*
Bedirhan Kömürcü
15.03.2022
23.44
*/

#include<stdio.h>

void arttir(int);

int main(){

	int i=5;
	
	printf("Call by Value\n---------------------------------\n");
	printf("oncesi %d\n",i);
	
	arttir(i);
	
	printf("sonrasi %d\n",i);


return 0;
}


void arttir(int k){
	k++;
}
