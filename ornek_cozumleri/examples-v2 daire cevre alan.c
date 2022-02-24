#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");
int sayi,x;
float a,c;
menu: printf("Çevresini ve alanını öğrenmek istediğiniz dairenin yarıçapını giriniz(pi=3,14): ");
scanf("%d",&sayi);
a=3.14*(sayi*sayi);
c=2*3.14*sayi;
printf("Alan: %.2f\nÇevre: %.2f\n",a,c);

		printf("\nmenüye dönmek için 9'a basın, \naksi bir tuş çıkışa yönlendirecektir.\n");
		scanf("%d",&x);
		printf("\n");		
		if(x == 9){
		printf("\n");
		goto menu;
		}else{}
return 0;}
