/*
Bedirhan Kömürcü
2010206036
lab hafta 9
*/

#include<stdio.h>

enum state{
	WORKING=0,FAILED,FREEZED
};

enum state currState=2;

enum state FindState(){
	
	return currState;
	
}

int main(){
	
	(FindState()==WORKING)? printf("WORKING"): printf("NOT WORKING");
	return 0;
	
}
