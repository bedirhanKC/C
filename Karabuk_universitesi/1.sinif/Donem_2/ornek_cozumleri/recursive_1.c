#include <stdio.h>

int fun1(int x, int y){
	
if (x == 0)
return y;//base case

else
return fun1(x - 1, x + y);

}

void fun2(int n){
	
int i = 0;

if (n > 1) {
fun2(n - 1);
printf("\n");
}

for (i = 0; i < n; i++) //base case – temel durum

printf(" * ");

}

int main(){
	
int a = 5, b = 2,c;
c = fun1(a, b);

printf("Value from the function: %d\n",c);
fun2(5);

}
