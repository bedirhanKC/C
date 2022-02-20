#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

int sayi,x,i,a=0,b;
menu:printf("girdiðiniz sayýya kadar bütün tek sayýlar toplanacaktýr(girdiðiniz sayý dahil): ");
scanf("%d",&sayi);
printf("toplanan sayýlarý görmek istemiyorsanýz 5'e basýn,aksi bir tuþ toplanan verileri gösterecektir:");
int y;
scanf("%d",&y);
for(i=1;i<=sayi;i++){
	a+=i*i;
	b=i*i;
		if(y!=5){printf("%d*%d=%d\n",i,i,b);}	
		
	
}

printf("\ntoplam:%d",a);

		printf("\n\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
		scanf("%d",&x);
		printf("\n");		
		if(x == 9){
		a=0;
		printf("\n");
		goto menu;
		}else{}
return 0;}
