#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

int sayi,x,i,a=0;
menu:printf("girdi�iniz say�ya kadar b�t�n tek say�lar toplanacakt�r(girdi�iniz say� dahil): ");
scanf("%d",&sayi);
printf("toplanan say�lar� g�rmek istemiyorsan�z 5'e bas�n,aksi bir tu� toplanan verileri g�sterecektir:");
int y;
scanf("%d",&y);
for(i=0;i<=sayi;i++){
	if(i%2!=0){
	a+=i;
		if(y!=5){printf("%d\n",i);}	
		
	}
}

printf("\ntoplam:%d",a);

		printf("\n\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
		scanf("%d",&x);
		printf("\n");		
		if(x == 9){
		printf("\n");
		goto menu;
		}else{}
return 0;}
