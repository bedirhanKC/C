#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Turkish");

int a,b,t,x;
menu:printf("�arpmak istedi�iniz ilk say�y� giriniz: ");
scanf("%d",&a);
printf("�arpmak istedi�iniz ikinci say�y� giriniz: ");
scanf("%d",&b);

t=a*b;

printf("\n");
printf("Sonu�: %d",t);

	printf("\n\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
	scanf("%d",&x);
	printf("\n");		
	if(x == 9){
	t=0;
	printf("\n");
	goto menu;
	}else{}

return 0;}
