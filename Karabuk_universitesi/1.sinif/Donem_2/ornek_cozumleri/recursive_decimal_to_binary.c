#include<stdio.h>
#include<stdlib.h>

int DecimalToBinary(int decimal,int *psayac, char *pdizi){
	
	if(decimal==0){
		
		*(pdizi+(*psayac))=0;
		(*psayac)++;
		pdizi=realloc(pdizi,(*psayac)+1);
	
	}else if(decimal==1){
		
		*(pdizi+(*psayac))=1;
		(*psayac)++;
		pdizi=realloc(pdizi,(*psayac)+1);
		
	}else if(decimal%2==0){
		
		DecimalToBinary(decimal/2,psayac,pdizi);
		*(pdizi+(*psayac))=0;
		(*psayac)++;
		pdizi=realloc(pdizi,(*psayac)+1);
		
	}else{
		
		DecimalToBinary(decimal/2,psayac,pdizi);
		*(pdizi+(*psayac))=1;
		(*psayac)++;
		pdizi=realloc(pdizi,(*psayac)+1);
		
	}
	
	
}

int main(){
	
	int decimal,sayac=0;
	
	printf("decimal : ");
	scanf("%d",&decimal);
	
	char *pdizi=(char *)malloc(1*sizeof(char));
	int *psayac=&sayac;
	
	DecimalToBinary(decimal,psayac,pdizi);
	
	int i;
	
	for(i=0;i<*psayac;i++){
		
		printf("%d",*(pdizi+i));
		
	}
	
	
	free(pdizi);
	return 0;
}
