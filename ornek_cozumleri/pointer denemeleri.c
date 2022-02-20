#include<stdio.h>

void cbv(int *a,int *b){
	
	int gecici=*a;
	
	
	*a=*b;
	*b=gecici;
	
}

int main(){
	
	int x=5,y=10;
	int *px=&x,*py=&y;
	
	cbv(px,py);
	
	printf("x=%d y=%d",x,y);
	
	return 0;
}
