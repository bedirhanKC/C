#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Turkish");
	
	int z,s,y,u,a;
menu:	printf("1-Sabah\n2-��leden sonra\n3-Gece\nBir zaman dilimi se�iniz[1-3]: ");
		scanf("%d",&z);
			if(z<1 || z>3){
			printf("\nyanl�� giri� yapt�n�z,tekrar zaman se�imine y�nlendiriliyorsunuz\n");
			goto menu;}
			else{
			
			}
			
menu2:	printf("\n1-Business\n2-ekonomi\nS�n�f se�iniz[1-2]: ");
		scanf("%d",&s);
			if(s<1 || s>2){
			printf("\nyanl�� giri� yapt�n�z,tekrar s�n�f se�imine y�nlendiriliyorsunuz\n");
			goto menu2;}
			else{}
			
			
menu3:	printf("\nYolcu say�s�n� giriniz: ");
		scanf("%d",&y);
			if(y<1){
			printf("yanl�� giri� yapt�n�z.\nL�tfen do�ru say� giri�i yap�n�z.\n");
			goto menu3;}
			else{}
			
		if(s==1){
			if(z==1){
			u=150*y;
			}
			
			else if(z==2){
			u=100*y;
			}
			
			else{
			u=140*y;
			}
			
		}
			
		else{
			if(z==1){
			u=90*y;
			}
			
			else if(z==2){
			u=120*y;
			}
			
			else{
			u=70*y;
			}
						
		}
		
	if(y>2){
		u=u*0.85;
		printf("\nyolcu say�s� 2'den fazla oldu�u i�in %15 indirim uygulanm��t�r\n");
	}
	printf("�demeniz gereken �cret: %d",u);
			
	printf("\ntekrar men�ye d�nmek i�in 9'a bas�n, aksi bir tu� ��k��a y�nlendirecektir: ");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
		goto menu;
		}else{
		}	
	
return 0; }
