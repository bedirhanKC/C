#include<stdio.h>

void fun(int n, int a, int b)
{
if (n >= 10)
 return;
 
 
fun(n + 2, a, b + n);
printf("%d %d %d\n", n, a, b);
}

int main(){
	
	
	
	fun(0,5,7);
	
	
	
	return 0;
}

