/*
Bedirhan Kömürcü
23.02.2022
Lab dersi
hafta 2
*/


#include<stdio.h>
#include<stdio.h>

int fonk(int x,int y,int sayac){
	
	if(x%sayac==0 && y%sayac==0) return sayac;
	
	else fonk(x,y,sayac-1);
	

}

int main(){
	
	int a,b,sayi;

	
	printf("A:");
	scanf("%d",&a);
	printf("B:");
	scanf("%d",&b);
	
	if(a<b) sayi=a;
	else sayi=b;
	
	
	printf("ebob:%d",fonk(a,b,sayi));
	
	return 0;
}
