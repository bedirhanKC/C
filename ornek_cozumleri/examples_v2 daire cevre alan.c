#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");
int sayi,x;
float a,c;
menu: printf("�evresini ve alan�n� ��renmek istedi�iniz dairenin yar��ap�n� giriniz(pi=3,14): ");
scanf("%d",&sayi);
a=3.14*(sayi*sayi);
c=2*3.14*sayi;
printf("Alan: %.2f\n�evre: %.2f\n",a,c);

		printf("\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
		scanf("%d",&x);
		printf("\n");		
		if(x == 9){
		printf("\n");
		goto menu;
		}else{}
return 0;}
