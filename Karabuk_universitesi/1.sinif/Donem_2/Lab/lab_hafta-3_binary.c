/*
Bedirhan Kömürcü
01.03.2022
hafta 3 lab
*/

#include <stdio.h>
	
	int binary(int x)
	{
	
	    if(x==0) return 0;
	    
	    if(x%2==0) return binary(x/2)*10+0;
	    else return binary(x/2)*10+1;
	    
	}
	
	
	int main()
	{
	
	printf("binary : %d",binary(10));
	
	return 0;
	}
