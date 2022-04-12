/*
Bedirhan Kömürcü
12.04.2022
23.15
*/

#include<stdio.h>

int main(){
	
	struct{
		
		int year;
		int month;
		int day;
		
	}birthday;
	
	printf("dogum gununuzu giriniz [gun-ay-yil] : ");
	scanf("%d %d %d",&birthday.day,&birthday.month,&birthday.year);
	
	printf("\n%d %d %d",birthday.day,birthday.month,birthday.year);
	
	return 0;
}
