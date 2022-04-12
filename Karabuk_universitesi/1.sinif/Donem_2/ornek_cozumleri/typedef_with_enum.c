/*
Bedirhan Kömürcü
12.04.2022
23.10
*/

#include<stdio.h>

int main(){
	
	enum boolean{
		
		false=0,
		true=1
		
		
	};
	
	typedef enum boolean bool;
	
	bool istrue;
	
	istrue=true;
	
	if(istrue==true) printf("true \n");
	
	
	return 0;
}
