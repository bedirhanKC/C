/* 
Bedirhan Kömürcü 
28.02.2022 
09.45 PM 
*/

#include <stdio.h>

int SumOfElement(int dizi[], int n){
	
if(n==0) return dizi[0];

else return dizi[n]+SumOfElement(dizi,n-1);

}

int main(){
	
int n=5 ,dizi[5]={3,7,2,9,1};
int toplam=SumOfElement(dizi,n-1);

printf("Toplam = %d",toplam);
return 0;
}

