#include<stdio.h>

int fonk(int x){
	
	if(x==1){
		
		return 1;
	}
	else{
		
		return x + fonk(x-1);
		
	}

}

int main(){
	
	int sayi;
	
	printf("Dogal sayiyi giriniz:");
	scanf("%d",&sayi);
	
	printf("toplam = %d",fonk(sayi));
	
	
	return 0;
}
