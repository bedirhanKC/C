#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Turkish");
	
	int sayi,a;

		menu:	printf("1-G�l\n2-Papatya\n3-Lale\n4-Nergis\n");
	printf("�i�ek kodunu giriniz[1-4]: ");
	scanf("%d",&sayi);
	
	switch(sayi){
		case 1:
			printf("\nG�l: haftada en az iki kere, k�� aylar�nda bir kere sulanmal�d�r(saks� �stten sulanmal�d�r.)\n");
		printf("\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
			goto menu;
		}else{
			break;
		}			
		case 2:
			printf("\npapatya: haftada bir kez sulanmal�d�r.\n");
		printf("\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
			goto menu;
		}else{
			break;
		}
		case 3:
			printf("\nLale: haftada iki kere saks� �stten sulanmal�d�r.\n");
		printf("\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
			goto menu;
		}else{
			break;
		}
		case 4:
			printf("\nNergis: 3-4 g�nde bir kontrol edilerek sulanmal�d�r. topra��n kurumamas� yeterlidir.\n");
		printf("\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
			goto menu;
		}else{
			break;
		}
		default : 
		
		
		printf("\nyanl�� karakter girdiniz.\n");		
		printf("\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
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

		
		
		
	
		 
		
	
	
	
	
	


