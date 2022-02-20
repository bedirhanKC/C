#include<stdio.h>

//Fonksiyonlarda matris kullanýmýyla ilgili;

void bastir(int matris[][4],int size){ //satýr deðeri size olarak atanýyor. Cde böyleymiþ,sorgulama çok.

	int i,j;
	
	printf("\n");
	
	for(i=0;i<size;i++){
		for(j=0 ; j<4 ; j++){
			printf("%d ",matris[i][j]);
		}
	printf("\n");
}
	
	
}

int main(){

	
	int i,j;
	
	int matris[3][4];
	
	for(i=0;i<3;i++){
		for(j=0 ; j<4 ; j++){
			scanf("%d",&matris[i][j]);
		}
	}
	
	bastir(matris,3);
	
	
return 0;
}
