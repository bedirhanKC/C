#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

	//while döngüleri
	// 0-100 arasýnda birer birer artýrma
	
		int sayi;
		sayi=0;
		
		while(sayi<=100){
			
			printf("%d",sayi);
			printf("\n");
			sayi++;
		}
	
	//alýþtýrma
	// 100 iþci numaralandýrýlýyor ve 4e bölünebilenler maðaza bölümüne, diðerleri fabrika bölümüne yönlendiriliyor
	
		int isci,magaza,fabrika;
		isci=1;
		magaza=0;
		fabrika=0;
		
		while(isci<=100){
			
			if(isci%4==0){
				printf("%d. maðaza bölümü",isci);
				magaza++;
			}else{
				printf("%d. fabrika bölümü",isci);
				fabrika++;
			}
			printf("\n");
			isci++;
		}
		printf("\n");
		printf("Maðazadaki iþci sayýsý: %d\n",magaza);
		printf("Fabrikadaki iþci sayýsý: %d",fabrika);

return 0;	
}
