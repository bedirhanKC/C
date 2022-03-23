#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void fonk(int ogrenciNumarasi,char *pchar,int *pint){
	int i=0,j=0,k,temp;
	while(ogrenciNumarasi>0){
		temp=ogrenciNumarasi%10;
		if(temp%2==0){
			*(pchar+i)=temp;
			
			i++;
			pchar=realloc(pchar,(i+1)*sizeof(char));
			
		}else{
			*(pint+j)=ogrenciNumarasi%10;
			j++;
			pint=realloc(pint,(j+1)*sizeof(int));
		}
		
		ogrenciNumarasi=ogrenciNumarasi/10;
		
	}

	
	for(k=0;k<j;k++){
		printf("%d",*(pint+k));
	}
		printf("\n");
	for(k=0;k<i;k++){
		printf("%d",*(pchar+k));
	}

}

int main(){
	
	//2010206036
	
	char *pchar=(char *)malloc(sizeof(char));
	int *pint=(int *)malloc(sizeof(int));
	
	fonk(2010206036,pchar,pint);
	
	
	
	
	return 0;
}
