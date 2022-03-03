/*
Bedirhan Kömürcü
03.03.2022
23.24
Hafta 3 lab
*/

#include <stdio.h>

int fun(int n)
{
	
 if (n == 4) return n;
 
 else return 2*fun(n+1);
}


int main()
{
	
 printf("%d ", fun(2));
 
 return 0;
}

