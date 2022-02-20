#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Turkish");

//Given an array of integers, return a new array with each value doubled.
//For example:
//[1, 2, 3] --> [2, 4, 6]

int n,x,a,i;

printf("dizinin kaç elamanlý olacaðýný belirleyiniz: ");
scanf("%d",&n);

int dizi[n];

for(i=0;i<n;i++){
	printf("%d. elemaný giriniz: ",i);
	scanf("%d",&dizi[i]);
}

printf("\nGirmiþ olduðunuz dizideki verilerin 2 katýyla oluþturulmuþ yeni dizi:\n\n");
for(i=0;i<n;i++){
	if(i==0){
		printf("dizi[%d]:{%d",n,dizi[i]*2);
	}else if(i<n-1){
		printf(",%d",dizi[i]*2);
	}else if(i==n-1){
		printf(",%d}",dizi[i]*2);
	}
}

return 0;}
