#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Turkish");

int a,b,t,x;
menu:printf("çarpmak istediðiniz ilk sayýyý giriniz: ");
scanf("%d",&a);
printf("Çarpmak istediðiniz ikinci sayýyý giriniz: ");
scanf("%d",&b);

t=a*b;

printf("\n");
printf("Sonuç: %d",t);

	printf("\n\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
	scanf("%d",&x);
	printf("\n");		
	if(x == 9){
	t=0;
	printf("\n");
	goto menu;
	}else{}

return 0;}
