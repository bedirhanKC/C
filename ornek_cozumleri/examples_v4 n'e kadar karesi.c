#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

int sayi,x,i,a=0,b;
menu:printf("girdi�iniz say�ya kadar b�t�n tek say�lar toplanacakt�r(girdi�iniz say� dahil): ");
scanf("%d",&sayi);
printf("toplanan say�lar� g�rmek istemiyorsan�z 5'e bas�n,aksi bir tu� toplanan verileri g�sterecektir:");
int y;
scanf("%d",&y);
for(i=1;i<=sayi;i++){
	a+=i*i;
	b=i*i;
		if(y!=5){printf("%d*%d=%d\n",i,i,b);}	
		
	
}

printf("\ntoplam:%d",a);

		printf("\n\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
		scanf("%d",&x);
		printf("\n");		
		if(x == 9){
		a=0;
		printf("\n");
		goto menu;
		}else{}
return 0;}
