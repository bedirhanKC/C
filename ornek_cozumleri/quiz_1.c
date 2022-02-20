#include<stdio.h>

int main(){
	
int a=5,b,c,d;
b=a++;
printf("b=%d\n",b);
c=--b;
printf("c=%d\n",c);
d=(b++)+(c--);
printf("d=%d\n",d);
printf("%d",b*c*d);
	return 0;
}
