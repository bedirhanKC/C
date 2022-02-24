#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

int sayi,x,i,a=0;
menu:printf("girdiğiniz sayıya kadar bütün tek sayılar toplanacaktır(girdiğiniz sayı dahil): ");
scanf("%d",&sayi);
printf("toplanan sayıları görmek istemiyorsanız 5'e basın,aksi bir tuş toplanan verileri gösterecektir:");
int y;
scanf("%d",&y);
for(i=0;i<=sayi;i++){
	if(i%2!=0){
	a+=i;
		if(y!=5){printf("%d\n",i);}	
		
	}
}

printf("\ntoplam:%d",a);

		printf("\n\nmenüye dönmek için 9'a basın, \naksi bir tuş çıkışa yönlendirecektir.\n");
		scanf("%d",&x);
		printf("\n");		
		if(x == 9){
		printf("\n");
		goto menu;
		}else{}
return 0;}
