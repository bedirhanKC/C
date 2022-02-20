#include<stdio.h>

/*
int main(){
	
	int a=3,*ap;
	float b=4.1,*bp;
	double c=5.789,*cp;
	char d='a',*dp;
	int sayilar[5]={1,2,3,4,5};
	int *arrayp;
	
	ap=&a;
	bp=&b;
	cp=&c;
	dp=&d;
	arrayp= &sayilar[0];
	
	printf("%u adresindeki intin degeri %d'dir\n",ap,*ap);
	printf("%u adresindeki floatin degeri %.2f'dir\n",bp,*bp);
	printf("%u adresindeki doublein degeri %lf'dir\n",cp,*cp);
	printf("%u adresindeki charin degeri %c'dir\n",dp,*dp);
	printf("%u adresindeki dizinin degeri %d'dir",arrayp,*arrayp);
	
	
	
	return 0;
}*/

int main(){
	
// * işareti kutunun içindekini & işareti ise kutunun nerde olduğunu gösterir
		
	int i , j = 1;
	int *jp1 , *jp2 = &j;
	
	jp1 = jp2;
	
	i = ++(*jp2);
	
	*jp2 = *jp1 + i;
	
	printf("i=%d \nj=%d \n*jp1=%d \n*jp2=%d",i,j,*jp1,*jp2);
		
	
	return 0;
}
