#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

		// Diziler
				 //0,1,2,3
	int sayilar[]={1,2,3,4}; //soldan saymaya ba�lan�r ve 0dan ba�lan�r
	printf("%d",sayilar[2]); 
	
	char kelime[]={"Bedirhan K�m�rc�"};
	printf("%s",kelime); // haf�zaya kelime yaz�laca�� i�in %s kullan�l�r. harf i�in %c kullan�l�r.
	
	char isim[20];
	scanf("%s",&isim);
	printf("%s",isim);
	

		// 5 tane say� i�erisinden en k���k olan� konsolda yazd�r�lcak bir program.
		
	
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
	printf("en k���k say� = %d",min);
	printf("\n");
	printf("en b�y�k say� = %d",max);
		printf("%d\n",dizi[i]);








return 0;}

