#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

//MATR�SLER

/*	int dizi[2][5]={{1,2,3,4,5},{10,20,30,40,50}};

			/*[1]bu sat�r[2]bu s�tun*/
//	printf("%d",dizi[1][2]);
		
		
			//��renci numaralar� ve notlar� listele
			

	int bilgiler[5][4]={
	{1,80,60,100},
	{2,60,100,100},
	{3,70,80,100},
	{4,78,50,40},
	{5,45,80,95}
	};
	int sayi,i,a,k,istenilenOgrenci;
	menu: printf("MENU\n");
	printf("1-��rencilerin numaralar� ile notlar�n� s�ralar.\n2-�stenilen ��rencinin notunu g�sterir.\n");
	printf("L�tfen se�iminizi yap�n�z: ");
	scanf("%d",&sayi);
	
if(sayi==1){
		printf("\n");
		for(i=0;i<5;i++){			
		printf("%d numaral� ��rencinin birinci notu = %d ikinci notu = %d ���nc� notu = %d\n",bilgiler[i][0],bilgiler[i][1],bilgiler[i][2],bilgiler[i][3]);
			
		}
			printf("\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
			scanf("%d",&a);
			printf("\n");		
			if(a == 9){
			goto menu;
			}else{
			goto menu3;	}		
			}

else if(sayi==2){
		printf("\n");
menu2:	printf("Lutfen notunu ��renmek istedi�iniz ��rencinin numaras�n� giriniz:");
		scanf("%d",&istenilenOgrenci);
		for(i=0;i<5;i++){
			if(istenilenOgrenci==bilgiler[i][0]){
				printf("\n");
				printf("%d numaral� ��rencinin birinci notu = %d ikinci notu = %d ���nc� notu = %d",bilgiler[i][0],bilgiler[i][1],bilgiler[i][2],bilgiler[i][3]);
				printf("\n"),				
					printf("\nmen�ye d�nmek i�in 9'a,\ntekrar ��renci se�mek i�in 5e bas�n.\nAksi bir tu� ��k��a y�nlendirecektir.\n");
					scanf("%d",&a);
					printf("\n");		
					if(a == 9){
					goto menu;
					}else if(a==5){
						goto menu2;
					}else{
					goto menu3;	}				
			}
		}
		if(istenilenOgrenci>5 || istenilenOgrenci==0 || istenilenOgrenci<0){
			printf("\n");
			printf("yanl�� tu�lama yapt�n�z.");
			printf("\n");
			printf("\nmen�ye d�nmek i�in 9'a,\ntekrar ��renci se�mek i�in 5e bas�n.\nAksi bir tu� ��k��a y�nlendirecektir.\n");
					scanf("%d",&a);
					printf("\n");		
					if(a == 9){
					goto menu;
					}else if(a==5){
						goto menu2;
					}else{
					goto menu3;	}		
		}
	}

else{
	printf("\n");
	printf("yanl�� tu�lama yapt�n�z.\n");
	printf("\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
		goto menu;
		}else{
		goto menu3;	}
	printf("\n\n");
	goto menu;
}




menu3 : 
return 0;}
