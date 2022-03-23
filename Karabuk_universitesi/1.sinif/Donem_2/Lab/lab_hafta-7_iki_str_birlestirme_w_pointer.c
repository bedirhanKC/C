#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char *p=(char *)malloc(1);
	int p1Uzunlugu,toplamUzunluk;
		
	int i=0;
	
	printf("1.stringi giriniz:");	
	while(1){
		
		*(p+i)=getch();
		
		if(*(p+i)==13) break;
		
		putch(*(p+i));
		
		i++;
		
		p=realloc(p,i+1);
		
	}
	
	printf("\n2.stringi giriniz:");	

	
	while(1){
		
		*(p+i)=getch();
		
		if(*(p+i)==13) break;
		
		putch(*(p+i));
		
		i++;
		
		p=realloc(p,i+1);
		
	}
	
	
	toplamUzunluk=strlen(p);
	printf("\n\nsonuc:");
	
	for(i=0;i<toplamUzunluk;i++){
		
		printf("%c",*(p+i));
		
	}
	
	return 0;
}
