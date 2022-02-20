#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Turkish");
	
	//Dışarıdan girilen bir X değerinini yine dışarıdan girilen N elemanlı bir dizideki elemanlardan hangisine en yakın olduğunu bulan program.

	int x,n,ans,a,i,s,c,q;
	
menu:	printf("Dışarıdan girilen bir X değerinini yine dışarıdan girilen N elemanlı bir dizideki elemanlardan,\nhangisine en yakın olduğunu bulan program.\n\nBir X değeri giriniz: ");
	scanf("%d",&x);
	
menu2:	printf("Dizinin eleman sayısını giriniz[n]: ");
	scanf("%d",&n);
		if(n<=0){
			printf("yanlış giriş yaptınız, menüye atabilirim ama keyfim kapatmak istedi, bb");
			return 0;
		}
	
	int dizi[n];
	
	for(i=0;i<n;i++){
		printf("%d. elemanı giriniz: ",i);
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
	printf("\n\n%d değerine en yakın değerler = %d ve %d",x,s,q);
	goto menu3;

}
printf("\n\n%d değerine en yakın değer = %d",x,s);

	
menu3:	printf("\n\nYeni X elemanı oluşturmak için 9'a,\nYeni dizi oluşturmak için ise 5'e basın.\naksi bir tuş çıkışa yönlendirecektir.\n");
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
