#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

int i,n,x,toplam=0;

int dizi[n];

menu:printf("dizinin kaç elamanlý olacaðýný belirleyiniz: ");
scanf("%d",&n);

for(i=0;i<n;i++){
	printf("%d. elamaný giriniz: ",i);
	scanf("%d",&dizi[i]);
}
toplam=0;

for(i=0;i<n;i++){
	toplam=toplam+dizi[i];
}
printf("\nDizideki elemanlarýn toplamý = %d",toplam);

	printf("\n\nYeni dizi oluþturmak için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
	scanf("%d",&x);
	printf("\n");		
	if(x == 9){
	toplam=0;
	printf("\n");
	goto menu;
	}else{}

return 0;}
