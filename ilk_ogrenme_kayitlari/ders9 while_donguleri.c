#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

	//while d�ng�leri
	// 0-100 aras�nda birer birer art�rma
	
		int sayi;
		sayi=0;
		
		while(sayi<=100){
			
			printf("%d",sayi);
			printf("\n");
			sayi++;
		}
	
	//al��t�rma
	// 100 i�ci numaraland�r�l�yor ve 4e b�l�nebilenler ma�aza b�l�m�ne, di�erleri fabrika b�l�m�ne y�nlendiriliyor
	
		int isci,magaza,fabrika;
		isci=1;
		magaza=0;
		fabrika=0;
		
		while(isci<=100){
			
			if(isci%4==0){
				printf("%d. ma�aza b�l�m�",isci);
				magaza++;
			}else{
				printf("%d. fabrika b�l�m�",isci);
				fabrika++;
			}
			printf("\n");
			isci++;
		}
		printf("\n");
		printf("Ma�azadaki i�ci say�s�: %d\n",magaza);
		printf("Fabrikadaki i�ci say�s�: %d",fabrika);

return 0;	
}
