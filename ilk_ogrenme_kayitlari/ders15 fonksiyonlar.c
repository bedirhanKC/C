#include <stdio.h>
#include <locale.h>

		//Fonksiyonlar
		//kullan�c�dan 2 say� isteyip 5e b�l�nd�klerini kontrol et
		
void hesapla(int sayi1, int sayi2){
		if(sayi1%5==0){
			printf("%d say�s� 5e tam b�l�nebilir",sayi1);
			printf("\n");
		}else{
			printf("%d say�s� 5e tam b�l�nemez",sayi1);
			printf("\n");
		}
		
		if(sayi2%5==0){
			printf("%d say�s� 5e tam b�l�nebilir",sayi2);
			printf("\n");
		}else{
			printf("%d say�s� 5e tam b�l�nemez",sayi2);
			printf("\n");			
		}
}

int main(){	
setlocale(LC_ALL,"Turkish");

	int a,b;
	scanf("%d %d",&a,&b);

	hesapla(a,b);








return 0;}
