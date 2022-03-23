#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i=0,j;
	
	char *ptr=(char *)malloc((i+1)*sizeof(char));
	
	while(1){
		
		*(ptr+i)=getch();
		
		if(*(ptr+i)==13) break;
		
		putch('*');
		
		i++;
		
		ptr=realloc(ptr,(i+1)*sizeof(char));		
		
	}
	
	printf("\n");
	
	for(j=0;j<i;j++){
		putch(*(ptr+j));
	}
	
	
	return 0;
}
