/*
Bedirhan Kömürcü
15.03.2022
23.49
*/

#include<stdio.h>

void increment(int *);

int main(){

	int i=5;
	
	printf("Call by Reference\n---------------------------------\n");
	printf("oncesi %d\n",i);
	
	increment(&i);
	
	printf("sonrasi %d\n",i);


return 0;
}


void increment(int *k){
	(*k)++;
}
