#include<stdio.h>

int main(){
	
	// A D G
	// B E H
	// C F I
	
	char metin[200],sonuc[200];
	char matris[3][3]={{'A','D','G'},{'B','E','H'},{'C','F','I'}};
	int i,j,k,arttirma=0;
	
	printf("Sifrelenmis metni giriniz:");
	gets(metin);
	
	printf("sonuc : ");
	
	for(i=0;metin[i]!='\0';i++){
		
		for(j=0;j<3;j++){			
			for(k=0;k<3;k++){
				
				if(metin[i]==matris[j][k]){
			
					printf("%d",(j+1)*10+(k+1));
				}
				
			}			
		}
		
		printf(" ");
		
	}
	
	
	return 0;
}
