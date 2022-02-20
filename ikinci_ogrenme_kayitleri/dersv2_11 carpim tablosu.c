#include<stdio.h>

int main(){
	
	int a,i,j;
menu:
	printf("A x A tipindeki carpim tablosu icin A degerini giriniz: ");
	scanf("%d",&a);
	printf("\n");
	
	for(i=1;i<=a;i++){
		
		for(j=1;j<=a;j++){
			printf("%d x %d = %d\t",i,j,i*j);
		}
		printf("\n");
	}
	
	
	printf("\n");
	goto menu;
	
	
	return 0;
}
