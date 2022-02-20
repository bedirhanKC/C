#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Turkish");
	
	int z,s,y,u,a;
menu:	printf("1-Sabah\n2-Öðleden sonra\n3-Gece\nBir zaman dilimi seçiniz[1-3]: ");
		scanf("%d",&z);
			if(z<1 || z>3){
			printf("\nyanlýþ giriþ yaptýnýz,tekrar zaman seçimine yönlendiriliyorsunuz\n");
			goto menu;}
			else{
			
			}
			
menu2:	printf("\n1-Business\n2-ekonomi\nSýnýf seçiniz[1-2]: ");
		scanf("%d",&s);
			if(s<1 || s>2){
			printf("\nyanlýþ giriþ yaptýnýz,tekrar sýnýf seçimine yönlendiriliyorsunuz\n");
			goto menu2;}
			else{}
			
			
menu3:	printf("\nYolcu sayýsýný giriniz: ");
		scanf("%d",&y);
			if(y<1){
			printf("yanlýþ giriþ yaptýnýz.\nLütfen doðru sayý giriþi yapýnýz.\n");
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
		printf("\nyolcu sayýsý 2'den fazla olduðu için %15 indirim uygulanmýþtýr\n");
	}
	printf("ödemeniz gereken ücret: %d",u);
			
	printf("\ntekrar menüye dönmek için 9'a basýn, aksi bir tuþ çýkýþa yönlendirecektir: ");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
		goto menu;
		}else{
		}	
	
return 0; }
