/*
Bedirhan Kömürcü
09.03.2022
Hafta 5
*/

#include<stdio.h>


int main(){

	int var=10;
	int *p;
	p=&var;
	
	printf("address of var is. %d",&var);
	printf("\naddress of var is %d",p);
	
	printf("\n\nValue of var is %d",var);
	printf("\nValue of var is %d",*p);
	printf("\nValue of var is %d",*(&var));

	printf("\n\nValue of pointer is %d",p);
	printf("\naddresss of pointer p is: %d",&p);
	
	return 0;
}
