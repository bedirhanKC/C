#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

		// Diziler
				 //0,1,2,3
	int sayilar[]={1,2,3,4}; //soldan saymaya baþlanýr ve 0dan baþlanýr
	printf("%d",sayilar[2]); 
	
	char kelime[]={"Bedirhan Kömürcü"};
	printf("%s",kelime); // hafýzaya kelime yazýlacaðý için %s kullanýlýr. harf için %c kullanýlýr.
	
	char isim[20];
	scanf("%s",&isim);
	printf("%s",isim);
	

		// 5 tane sayý içerisinden en küçük olaný konsolda yazdýrýlcak bir program.
		
	
	int i,min,max;
	int dizi[]={46,30,55,10,52};
	min=dizi[0];
	max=dizi[0];
	for(i=0;i<5;i++){
		if(min>dizi[i]){
			min=dizi[i];}
		if(max<dizi[i]){
			max=dizi[i];}
		
	}
	printf("en küçük sayý = %d",min);
	printf("\n");
	printf("en büyük sayý = %d",max);
		printf("%d\n",dizi[i]);








return 0;}

