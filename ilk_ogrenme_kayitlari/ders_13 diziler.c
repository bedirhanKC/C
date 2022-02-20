#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

		// Diziler
		     //0,1,2,3
	int sayilar[]={1,2,3,4}; //soldan saymaya başlanır ve 0dan başlanır
	printf("%d",sayilar[2]); 
	
	char kelime[]={"Bedirhan Kömürcü"};
	printf("%s",kelime); // hafızaya kelime yazılacağı için %s kullanılır. harf için %c kullanılır.
	
	char isim[20];
	scanf("%s",&isim);
	printf("%s",isim);
	

		// 5 tane sayı içerisinden en küçük olanı konsolda yazdırılcak bir program.
		
	
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
	printf("en küçük sayı = %d",min);
	printf("\n");
	printf("en büyük sayı = %d",max);
	printf("%d\n",dizi[i]);


return 0;}
