#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

int i,n,x,toplam=0;

int dizi[n];

menu:printf("dizinin ka� elamanl� olaca��n� belirleyiniz: ");
scanf("%d",&n);

for(i=0;i<n;i++){
	printf("%d. elaman� giriniz: ",i);
	scanf("%d",&dizi[i]);
}
toplam=0;

for(i=0;i<n;i++){
	toplam=toplam+dizi[i];
}
printf("\nDizideki elemanlar�n toplam� = %d",toplam);

	printf("\n\nYeni dizi olu�turmak i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
	scanf("%d",&x);
	printf("\n");		
	if(x == 9){
	toplam=0;
	printf("\n");
	goto menu;
	}else{}

return 0;}
