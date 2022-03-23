#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int i=0,gecici,j;
	int *ptr=(int *)malloc(sizeof(int));
	
	while(1){
		
		printf("%d. sayiyi giriniz : ",i+1);
		scanf("%d",&gecici);
		
		if(gecici==0) break;
		
		ptr=realloc(ptr,(i)*sizeof(int));
		
		*(ptr+i)=gecici;
		
		i++;
		
	}
	
	for(j=0;j<i;j++){
		
		printf("\n%pc",(ptr+j));
		
	}
	
	return 0;
}
