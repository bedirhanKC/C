#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Turkish");
	
	//D��ar�dan girilen bir X de�erinini yine d��ar�dan girilen N elemanl� bir dizideki elemanlardan hangisine en yak�n oldu�unu bulan program.

	int x,n,ans,a,i,s,c,q;
	
menu:	printf("D��ar�dan girilen bir X de�erinini yine d��ar�dan girilen N elemanl� bir dizideki elemanlardan,\nhangisine en yak�n oldu�unu bulan program.\n\nBir X de�eri giriniz: ");
	scanf("%d",&x);
	
menu2:	printf("Dizinin eleman say�s�n� giriniz[n]: ");
	scanf("%d",&n);
		if(n<=0){
			printf("yanl�� giri� yapt�n�z, men�ye atabilirim ama s�rf �erefsizlik olsun diye uygulamay� kapat�yorum, bb");
			return 0;
		}
	
	int dizi[n];
	
	for(i=0;i<n;i++){
		printf("%d. eleman� giriniz: ",i);
		scanf("%d",&a);
		dizi[i]=a;
	}
ans=abs(dizi[0]-x);	
s=dizi[0];
q=0;
	for(i=0;i<n;i++){
		if(abs(dizi[i]-x)<ans){
			ans=abs(dizi[i]-x);
			s=dizi[i];
		}else if(abs(dizi[i]-x)<=ans){
			q=dizi[i];
		}
}
if(s!=q){
	printf("\n\n%d de�erine en yak�n de�erler = %d ve %d",x,s,q);
	goto menu3;

}
printf("\n\n%d de�erine en yak�n de�er = %d",x,s);

	
menu3:	printf("\n\nYeni X eleman� olu�turmak i�in 9'a,\nYeni dizi olu�turmak i�in ise 5'e bas�n.\naksi bir tu� ��k��a y�nlendirecektir.\n");
	scanf("%d",&c);
	printf("\n");		
	if(c == 9){
	printf("\n");
	goto menu;
	}else if(c==5){
	printf("\n");
	goto menu2;
	}
	
return 0;}
