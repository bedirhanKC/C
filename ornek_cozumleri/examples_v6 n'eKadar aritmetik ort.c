#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Turkish");

int sayi,i,x;
float a=0,toplam;
menu:printf("aritmetik ortalamasýný bulmak istediðiniz sayýyý giriniz: ");
scanf("%d",&sayi);

for(i=1;i<=sayi;i++){
	a+=i;
	printf("%d\n",i);
}
printf("%.0f/%d = ",a,sayi);
toplam=a/sayi;
printf("%.2f",toplam);

	printf("\n\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
	scanf("%d",&x);
	printf("\n");		
	if(x == 9){
	a=0;
	printf("\n");
	goto menu;
	}else{}
	
return 0;}
