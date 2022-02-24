#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Turkish");

int a,b,t,x;
menu:printf("çarpmak istediğiniz ilk sayıyı giriniz: ");
scanf("%d",&a);
printf("Çarpmak istediğiniz ikinci sayıyı giriniz: ");
scanf("%d",&b);

t=a*b;

printf("\n");
printf("Sonuç: %d",t);

	printf("\n\nmenüye dönmek için 9'a basın, \naksi bir tuş çıkışa yönlendirecektir.\n");
	scanf("%d",&x);
	printf("\n");		
	if(x == 9){
	t=0;
	printf("\n");
	goto menu;
	}else{}

return 0;}
