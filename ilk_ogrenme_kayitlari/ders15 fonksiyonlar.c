#include <stdio.h>
#include <locale.h>

		//Fonksiyonlar
		//kullanýcýdan 2 sayý isteyip 5e bölündüklerini kontrol et
		
void hesapla(int sayi1, int sayi2){
		if(sayi1%5==0){
			printf("%d sayýsý 5e tam bölünebilir",sayi1);
			printf("\n");
		}else{
			printf("%d sayýsý 5e tam bölünemez",sayi1);
			printf("\n");
		}
		
		if(sayi2%5==0){
			printf("%d sayýsý 5e tam bölünebilir",sayi2);
			printf("\n");
		}else{
			printf("%d sayýsý 5e tam bölünemez",sayi2);
			printf("\n");			
		}
}

int main(){	
setlocale(LC_ALL,"Turkish");

	int a,b;
	scanf("%d %d",&a,&b);

	hesapla(a,b);








return 0;}
