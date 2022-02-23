/*
Bedirhan Kömürcü
23.02.2022
Lab dersi
hafta 2
*/


#include<stdio.h>
#include<stdio.h>

int fonk(int dizi[],int length){
	
	
	if(length-1==0){
		
	return dizi[0];	}
		
	if(dizi[length-1]>=fonk(dizi,length-1)) return dizi[length-1];
	
	else return fonk(dizi,length-1);
	

}

int main(){
	
	int sayilar[5]={3,5,12,6,8};

	
	printf("maximum deger = %d",fonk(sayilar,5));
	
	
	return 0;
}
