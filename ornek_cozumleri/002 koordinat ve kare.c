#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Turkish");

int ax,ay,bx,by,cx,cy,dx,dy,a;
menu: printf("ilk noktan�n kordinatlar�n� giriniz:\n");
scanf("%d %d",&ax,&ay);
printf("ilk noktan�n kordinatlar�:(%d,%d)\n\nikinci noktan�n kordinatlar�n� giriniz:\n",ax,ay);
scanf("%d %d",&bx,&by);
printf("ikinci noktan�n kordinatlar�:(%d,%d)\n\n���nc� noktan�n kordinatlar�n� giriniz:\n",bx,by);
scanf("%d %d",&cx,&cy);
printf("���nc� noktan�n kordinatlar�:(%d,%d)\n\nd�rd�nc� noktan�n kordinatlar�n� giriniz:\n",cx,cy);
scanf("%d %d",&dx,&dy);
printf("d�rd�nc� noktan�n kordinatlar�:(%d,%d)\n\n",dx,dy);
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
		printf("�ekil karedir");	
	}else{printf("�ekil e�kenar d�rtgendir");
	}	
}else{
	printf("�ekil kare de�ildir.");
}


			printf("\n");
			printf("\nmen�ye d�nmek i�in 9'a bas�n, \naksi bir tu� ��k��a y�nlendirecektir.\n");
			scanf("%d",&a);
			printf("\n");		
			if(a == 9){
			goto menu;
			}else{
				}		
			


return 0;}
