#include<stdio.h>

void fonk(void);

int gid = 287; //global int de�i�ken tan�mlamas�

int main(void){
	
	printf("deneme1.c gid degisken degeri: %d\n",gid);
	
	fonk(); // deneme2.c dosyas�ndaki fonk() fonksiyonuna �a�r�
	
	return 0;
}
