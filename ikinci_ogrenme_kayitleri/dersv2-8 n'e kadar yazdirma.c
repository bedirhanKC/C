#include<stdio.h>

int main(){
	
	int n,i,a;
	printf("birden baslayarak girdiginiz sayiya kadar yazdirma: ");
	scanf("%d",&n);
	i=1;
	
	printf("tum sayilar:\n");
		while(i<=n){
		printf("%d\n",i);
		i++;
		}
	i=1;
	
	printf("cift sayilar:\n");
		while(i<=n){
		if(i%2==0){		
		printf("%d\n",i);
		}
		i++;}
	
	
	
	return 0;
}
