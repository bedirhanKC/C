#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");
int sayi,i,a,x=0;
menu:	printf("Sonu�, girdi�iniz say�ya kadar olan pozitif tam say�lar�n�n toplam�n� verecektir(girdi�iniz say� dahildir).\nHesaplamak istedi�iniz say�y� giriniz: ");
scanf("%d",&sayi);
for(i=1;i<=sayi;i++){
	a+=i;
	printf("%d\n",i);	
}
printf("\ntoplam: %d\n",a);
		printf("\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
		scanf("%d",&x);
		printf("\n");		
		if(x == 9){
		printf("\n");
		goto menu;
		}else{}
					
			







return 0;}

