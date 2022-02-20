#include<stdio.h>

int main(){
	
	int satir;
	int i,j;
	
	printf("satir sayisini giriniz:");
	scanf("%d",&satir);
	
	for(i=1;i<=satir;i++){
		
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		
	printf("\n");
	}
	
	
	return 0;
}
