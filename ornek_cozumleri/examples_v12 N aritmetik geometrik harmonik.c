#include <stdio.h>
#include<math.h>
#include <locale.h>
#include<conio.h>

int main(){
setlocale(LC_ALL,"Turkish");

int i,n,x;
float art=0,geo=1.0,har=0.0;

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

for(i=0;i<n;i++){
	art+=dizi[i];
	geo=geo*dizi[i];
	har=har+1.0/dizi[i]; 

}
	art=art/n;
	har=n/har;
	geo=pow(geo,1.0/n);

	printf("Aritmetik ortalama:%.2f\n",art);
	printf("Geometrik ortalama:%.2f\n",geo);
	printf("Harmonik ortalama:%.2f\n",har);
	
		printf("\n\nYeni dizi olu�turmak i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
	scanf("%d",&x);
	printf("\n");		
	if(x == 9){
	printf("\n");
	goto menu;
	}else{}

return 0;}
