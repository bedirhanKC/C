/*
Bedirhan Kömürcü
02.03.2022
20.00
*/

#include<stdio.h>

int us_alma(int x,int y){
	
	if(y==1) return x;
	
	else return x*us_alma(x,y-1);
	
}

int main(){
	
	
	int us,taban;
	
	printf("Us degerini giriniz:");
	scanf("%d",&us);
	printf("Taban degerini giriniz:");
	scanf("%d",&taban);
	
	printf("%d uzeri %d = %d",taban,us,us_alma(taban,us));

return 0;
}
