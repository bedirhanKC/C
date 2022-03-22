/*
Bedirhan Kömürcü
22.03.2022
23.10
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int ogrenciNumarasi;
	int i=0,j;
	
	int *ptr=(int *)malloc(sizeof(int));
	
	printf("ogrenci numaranizi giriniz : ");
	scanf("%d",&ogrenciNumarasi);
	
	while(1){
		
		if(ogrenciNumarasi<1) break;
		
		*(ptr+i)=ogrenciNumarasi%2;
		ogrenciNumarasi=ogrenciNumarasi/2;
		
		i++;
		
		ptr=realloc(ptr,(1+i)*sizeof(int));
		
	}
	
	
	for(j=i;j>0;j--){
		
		printf("%d",*(ptr+j-1));
	}
	
}
