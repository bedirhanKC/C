#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

	// for d�ng�s�
	
/*	int i;
	for(i=0;i<=100;i+=2){ // for([-i'nin ba�lang�� de�eri] ; [ d�ng�n�n biti�i i�in son de�er] ; [ i'nin art���(i+2 vb. olabilir)]{
		printf("%d",i);
		printf("\n");
	}
*/

	// D��ardan girilen bir say�n�n faktoriyelini hesaplayan bir program
	
	float sayi,i,f,a;
	menu: printf("L�tfen faktoriyelini bulmak istedi�iniz say�y� giriniz: ");
	f=1.0;
	i=1.0;
	scanf("%f",&sayi);
	for(i=1.0;i<=sayi;i++){
		f*=i;
	}
	printf("\n");
	printf("%.0f!=%.0f",sayi,f);
	printf("\n");
	printf("\nTekrar hesaplama yapmak i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
		scanf("%f",&a);
		printf("\n");		
		if(a == 9){
			goto menu;
		}else{
			return 0;}

return 0;	
}

