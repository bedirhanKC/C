#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Turkish");
	
	//Dýþarýdan girilen bir X deðerinini yine dýþarýdan girilen N elemanlý bir dizideki elemanlardan hangisine en yakýn olduðunu bulan program.

	int x,n,ans,a,i,s,c,q;
	
menu:	printf("Dýþarýdan girilen bir X deðerinini yine dýþarýdan girilen N elemanlý bir dizideki elemanlardan,\nhangisine en yakýn olduðunu bulan program.\n\nBir X deðeri giriniz: ");
	scanf("%d",&x);
	
menu2:	printf("Dizinin eleman sayýsýný giriniz[n]: ");
	scanf("%d",&n);
		if(n<=0){
			printf("yanlýþ giriþ yaptýnýz, menüye atabilirim ama sýrf þerefsizlik olsun diye uygulamayý kapatýyorum, bb");
			return 0;
		}
	
	int dizi[n];
	
	for(i=0;i<n;i++){
		printf("%d. elemaný giriniz: ",i);
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
	printf("\n\n%d deðerine en yakýn deðerler = %d ve %d",x,s,q);
	goto menu3;

}
printf("\n\n%d deðerine en yakýn deðer = %d",x,s);

	
menu3:	printf("\n\nYeni X elemaný oluþturmak için 9'a,\nYeni dizi oluþturmak için ise 5'e basýn.\naksi bir tuþ çýkýþa yönlendirecektir.\n");
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
