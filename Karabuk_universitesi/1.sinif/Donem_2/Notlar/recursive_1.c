/*
Bedirhan Kömürcü
28.02.2022
08.03 PM
*/

#include <stdio.h>

int fun(int dizi[], int n){
	
int x;

if (n == 1)
return dizi[0];

else
x = fun(dizi, n - 1);

if (x > dizi[n - 1])
return x;

else
return dizi[n - 1];
}


int main(){
	
int array[] = { 12, 10, 300, 50, 100};

printf(" %d ", fun(arr, 5));

return 0;
}
