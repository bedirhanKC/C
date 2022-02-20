#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(){
system("COLOR 2");
setlocale(LC_ALL,"Turkish");

int min,max,i,n,x;

int dizi[n];

menu:printf("dizinin kaç elamanlý olacaðýný belirleyiniz: ");
scanf("%d",&n);
	if(n<=0){
		printf("\nyanlýþ giriþ yaptýnýðýnýz için tekrar menüye yönlendiriliyorsunuz. Lütfen 0'dan büyük bir deðer giriniz");
		printf("\n\n");
		goto menu;
	}

for(i=0;i<n;i++){
	printf("%d. elamaný giriniz: ",i);
	scanf("%d",&dizi[i]);
		
}

min=dizi[0];
max=dizi[0];

for(i=0;i<n;i++){
	if(min>dizi[i]){
		min=dizi[i];
	}
	if(max<dizi[i]){
		max=dizi[i];
	}
}

printf("\nEn büyük deðer:%d\nEn küçük deðer:%d",max,min);

	printf("\n\nYeni dizi oluþturmak için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
	scanf("%d",&x);
	printf("\n");		
	if(x == 9){
		
	printf("\n");
	goto menu;
	}else{}

return 0;}


