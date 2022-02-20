#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

	// for döngüsü
	
/*	int i;
	for(i=0;i<=100;i+=2){ // for([-i'nin baþlangýç deðeri] ; [ döngünün bitiþi için son deðer] ; [ i'nin artýþý(i+2 vb. olabilir)]{
		printf("%d",i);
		printf("\n");
	}
*/

	// Dýþardan girilen bir sayýnýn faktoriyelini hesaplayan bir program
	
	float sayi,i,f,a;
	menu: printf("Lütfen faktoriyelini bulmak istediðiniz sayýyý giriniz: ");
	f=1.0;
	i=1.0;
	scanf("%f",&sayi);
	for(i=1.0;i<=sayi;i++){
		f*=i;
	}
	printf("\n");
	printf("%.0f!=%.0f",sayi,f);
	printf("\n");
	printf("\nTekrar hesaplama yapmak için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
		scanf("%f",&a);
		printf("\n");		
		if(a == 9){
			goto menu;
		}else{
			return 0;}

return 0;	
}

