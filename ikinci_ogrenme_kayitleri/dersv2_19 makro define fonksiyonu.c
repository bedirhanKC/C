#include<stdio.h>

#define buyuksayi(sayi1,sayi2) (sayi1 > sayi2) ? sayi1 : sayi2

int main(){
	
	int x,y;
	
	scanf("%d%d",&x,&y);
	printf("\n%d",buyuksayi(x,y));	
	
	return 0;
}
