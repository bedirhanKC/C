/*
Bedirhan Kömürcü
2010206036
lab hafta 9
*/

#include<stdio.h>

enum example{a=1,b,c};

enum example example1 = 2;

enum example answer(){
	return example1;
}

int main(){
	
	
	(answer()==a)? printf("yes"): printf("no");
}
