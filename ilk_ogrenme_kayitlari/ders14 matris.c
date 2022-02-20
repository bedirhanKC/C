#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

//MATRÝSLER

/*	int dizi[2][5]={{1,2,3,4,5},{10,20,30,40,50}};

			/*[1]bu satýr[2]bu sütun*/
//	printf("%d",dizi[1][2]);
		
		
			//öðrenci numaralarý ve notlarý listele
			

	int bilgiler[5][4]={
	{1,80,60,100},
	{2,60,100,100},
	{3,70,80,100},
	{4,78,50,40},
	{5,45,80,95}
	};
	int sayi,i,a,k,istenilenOgrenci;
	menu: printf("MENU\n");
	printf("1-Öðrencilerin numaralarý ile notlarýný sýralar.\n2-Ýstenilen öðrencinin notunu gösterir.\n");
	printf("Lütfen seçiminizi yapýnýz: ");
	scanf("%d",&sayi);
	
if(sayi==1){
		printf("\n");
		for(i=0;i<5;i++){			
		printf("%d numaralý öðrencinin birinci notu = %d ikinci notu = %d üçüncü notu = %d\n",bilgiler[i][0],bilgiler[i][1],bilgiler[i][2],bilgiler[i][3]);
			
		}
			printf("\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
			scanf("%d",&a);
			printf("\n");		
			if(a == 9){
			goto menu;
			}else{
			goto menu3;	}		
			}

else if(sayi==2){
		printf("\n");
menu2:	printf("Lutfen notunu öðrenmek istediðiniz öðrencinin numarasýný giriniz:");
		scanf("%d",&istenilenOgrenci);
		for(i=0;i<5;i++){
			if(istenilenOgrenci==bilgiler[i][0]){
				printf("\n");
				printf("%d numaralý öðrencinin birinci notu = %d ikinci notu = %d üçüncü notu = %d",bilgiler[i][0],bilgiler[i][1],bilgiler[i][2],bilgiler[i][3]);
				printf("\n"),				
					printf("\nmenüye dönmek için 9'a,\ntekrar öðrenci seçmek için 5e basýn.\nAksi bir tuþ çýkýþa yönlendirecektir.\n");
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
			printf("yanlýþ tuþlama yaptýnýz.");
			printf("\n");
			printf("\nmenüye dönmek için 9'a,\ntekrar öðrenci seçmek için 5e basýn.\nAksi bir tuþ çýkýþa yönlendirecektir.\n");
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
	printf("yanlýþ tuþlama yaptýnýz.\n");
	printf("\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
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
