#include<stdio.h>

void cbv(int a,int b){
	
	int gecici=a;
		
	a=b;
	b=gecici;
	
	int *pa=&a;
	int *pb=&b;	
}

int main(){
	
	int x=5,y=10;
	
	cbv(x,y);
	
	x=*pa;
	y=*pb;
	
	printf("x=%d y=%d",x,y);
	
	return 0;
}
