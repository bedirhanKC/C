#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");
int sayi,i,a,x=0;
menu:	printf("Sonuç, girdiðiniz sayýya kadar olan pozitif tam sayýlarýnýn toplamýný verecektir(girdiðiniz sayý dahildir).\nHesaplamak istediðiniz sayýyý giriniz: ");
scanf("%d",&sayi);
for(i=1;i<=sayi;i++){
	a+=i;
	printf("%d\n",i);	
}
printf("\ntoplam: %d\n",a);
		printf("\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
		scanf("%d",&x);
		printf("\n");		
		if(x == 9){
		printf("\n");
		goto menu;
		}else{}
					
			







return 0;}

