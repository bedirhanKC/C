#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main(){
system("COLOR 2");
setlocale(LC_ALL,"Turkish");

int min,max,i,n,x;

int dizi[n];

menu:printf("dizinin ka� elamanl� olaca��n� belirleyiniz: ");
scanf("%d",&n);
	if(n<=0){
		printf("\nyanl�� giri� yapt�n���n�z i�in tekrar men�ye y�nlendiriliyorsunuz. L�tfen 0'dan b�y�k bir de�er giriniz");
		printf("\n\n");
		goto menu;
	}

for(i=0;i<n;i++){
	printf("%d. elaman� giriniz: ",i);
	scanf("%d",&dizi[i]);
		
}

min=dizi[0];
max=dizi[0];

for(i=0;i<n;i++){
	if(min>dizi[i]){
		min=dizi[i];
	}
	if(max<dizi[i]){
		max=dizi[i];
	}
}

printf("\nEn b�y�k de�er:%d\nEn k���k de�er:%d",max,min);

	printf("\n\nYeni dizi olu�turmak i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
	scanf("%d",&x);
	printf("\n");		
	if(x == 9){
		
	printf("\n");
	goto menu;
	}else{}

return 0;}


