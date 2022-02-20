#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Turkish");

int ax,ay,bx,by,cx,cy,dx,dy,a;
menu: printf("ilk noktanýn kordinatlarýný giriniz:\n");
scanf("%d %d",&ax,&ay);
printf("ilk noktanýn kordinatlarý:(%d,%d)\n\nikinci noktanýn kordinatlarýný giriniz:\n",ax,ay);
scanf("%d %d",&bx,&by);
printf("ikinci noktanýn kordinatlarý:(%d,%d)\n\nüçüncü noktanýn kordinatlarýný giriniz:\n",bx,by);
scanf("%d %d",&cx,&cy);
printf("üçüncü noktanýn kordinatlarý:(%d,%d)\n\ndördüncü noktanýn kordinatlarýný giriniz:\n",cx,cy);
scanf("%d %d",&dx,&dy);
printf("dördüncü noktanýn kordinatlarý:(%d,%d)\n\n",dx,dy);
float A,B,C,D;
A=(sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by)));
B=(sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy)));
C=(sqrt((cx-dx)*(cx-dx)+(cy-dy)*(cy-dy)));
D=(sqrt((dx-ax)*(dx-ax)+(dy-ay)*(dy-ay)));

printf("\n");
printf("A:%.2f",A);
printf("\n");
printf("B:%.2f",B);
printf("\n");
printf("C:%.2f",C);
printf("\n");
printf("D:%.2f",D);
printf("\n\n");

if(A==B && B==C && C==D){

	if(sqrt((A*A)+(B*B))==sqrt((C*C)+(D*D))){
		printf("Þekil karedir");	
	}else{printf("þekil eþkenar dörtgendir");
	}	
}else{
	printf("þekil kare deðildir.");
}


			printf("\n");
			printf("\nmenüye dönmek için 9'a basýn, \naksi bir tuþ çýkýþa yönlendirecektir.\n");
			scanf("%d",&a);
			printf("\n");		
			if(a == 9){
			goto menu;
			}else{
				}		
			


return 0;}
