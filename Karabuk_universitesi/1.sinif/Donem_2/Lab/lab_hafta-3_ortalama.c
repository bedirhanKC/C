/*
Bedirhan Kömürcü
01.03.2022
hafta 3 lab
*/

#include <stdio.h>
	
	float ort(float dizi[], int size)
	{
	
	    if(size-1==0) return dizi[0]/6;
	    
	    else return (dizi[size-1]/6)+(ort(dizi,size-1));
	    
	}
	
	
	int main()
	{
	
	float sayilar[6]={1,2,3,4,5,6};
	printf("ortalama:%f",ort(sayilar,6));
	
	return 0;
	}
