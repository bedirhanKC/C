#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Turkish");

int sayi,i,x;
float a=0,toplam;
menu:printf("aritmetik ortalamas�n� bulmak istedi�iniz say�y� giriniz: ");
scanf("%d",&sayi);

for(i=1;i<=sayi;i++){
	a+=i;
	printf("%d\n",i);
}
printf("%.0f/%d = ",a,sayi);
toplam=a/sayi;
printf("%.2f",toplam);

	printf("\n\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
	scanf("%d",&x);
	printf("\n");		
	if(x == 9){
	a=0;
	printf("\n");
	goto menu;
	}else{}
	
return 0;}
