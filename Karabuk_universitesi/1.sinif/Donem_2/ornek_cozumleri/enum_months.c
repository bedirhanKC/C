/*
Bedirhan Kömürcü
12.04.2022
23.29
*/

#include<stdio.h>

enum months{
		
	january=1,february,march,april,may,june,july,august,september,october,november,december
		
		
};

int main(){
	

	
	typedef enum months aylar;
	
	aylar ay;
	
	ay=march;
	
	if(ay==march) printf("%d",ay);
	
	
	return 0;
}
