/*
Bedirhan Kömürcü
2010206036
lab hafta 8
*/

//kabarcýk sýralamasý(bubble sort)

#include<stdio.h>

int main(){
	
	int dizi[5]={7,3,5,1,2};
	int n=5;
	
	int ekle,j,i;
	
	for(i=1;i<n;i++){
		
		ekle=dizi[i];
		
		for(j=i-1;j>=0 && ekle<=dizi[j];j--) dizi[j+1]=dizi[j];
		
		dizi[j+1]=ekle;
	}
	
	for(i=0;i<n;i++){
		
		printf("%d ",dizi[i]);
		
	}	
	
	return 0;
}
