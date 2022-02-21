#include<stdio.h>

void fonk(void);

int gid = 287; //global int deðiþken tanýmlamasý

int main(void){
	
	printf("deneme1.c gid degisken degeri: %d\n",gid);
	
	fonk(); // deneme2.c dosyasýndaki fonk() fonksiyonuna çaðrý
	
	return 0;
}
