#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	
	int sayi,a;

		menu:	printf("1-Gül\n2-Papatya\n3-Lale\n4-Nergis\n");
	printf("Çiçek kodunu giriniz[1-4]: ");
	scanf("%d",&sayi);
	
	switch(sayi){
		case 1:
			printf("\nGül: haftada en az iki kere, kýþ aylarýnda bir kere sulanmalýdýr(saksý üstten sulanmalýdýr.)\n");
		printf("\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
			goto menu;
		}else{
			break;
		}			
		case 2:
			printf("\npapatya: haftada bir kez sulanmalýdýr.\n");
		printf("\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
			goto menu;
		}else{
			break;
		}
		case 3:
			printf("\nLale: haftada iki kere saksý üstten sulanmalýdýr.\n");
		printf("\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
			goto menu;
		}else{
			break;
		}
		case 4:
			printf("\nNergis: 3-4 günde bir kontrol edilerek sulanmalýdýr. topraðýn kurumamasý yeterlidir.\n");
		printf("\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
			goto menu;
		}else{
			break;
		}
		default : 
		
		
		printf("\nyanlýþ karakter girdiniz.\n");		
		printf("\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
			goto menu;
		}else{
			break;
		}
	
		

	}
	
			return 0;

	}

		
		
		
	
		 
		
	
	
	
	
	


