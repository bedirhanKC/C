#include<stdio.h>

int main(){
	
	int kisa,uzun;
	printf("Bu uygulama dikdortgenin alani ve cevresini hesaplar.\n\nKisa kenari giriniz: ");
	scanf("%d",&kisa);
		if(kisa<=0){
			printf("yanlis girdin,sg bidaha gir");
			return 0;
		}
	printf("Uzun kenari giriniz: ");
	scanf("%d",&uzun);
		if(kisa<=0){
		printf("yanlis girdin,sg bidaha gir");

		return 0;
		}
	

	
	printf("Alan=%d\n",kisa*uzun);
	printf("Cevre=%d\n",kisa*2+uzun*2);
	
	return 0;
}
