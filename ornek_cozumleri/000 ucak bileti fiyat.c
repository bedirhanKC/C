#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"Turkish");
	
	int z,s,y,u,a;
menu:	printf("1-Sabah\n2-Öğleden sonra\n3-Gece\nBir zaman dilimi seçiniz[1-3]: ");
		scanf("%d",&z);
			if(z<1 || z>3){
			printf("\nyanlış giriş yaptınız,tekrar zaman seçimine yönlendiriliyorsunuz\n");
			goto menu;}
			else{
			
			}
			
menu2:	printf("\n1-Business\n2-ekonomi\nSınıf seçiniz[1-2]: ");
		scanf("%d",&s);
			if(s<1 || s>2){
			printf("\nyanlış giriş yaptınız,tekrar sýnýf seçimine yönlendiriliyorsunuz\n");
			goto menu2;}
			else{}
			
			
menu3:	printf("\nYolcu sayısını giriniz: ");
		scanf("%d",&y);
			if(y<1){
			printf("yanlış giriş yaptınız.\nLütfen doğru sayı girişi yapınız.\n");
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
		printf("\nyolcu sayısı 2'den fazla olduğu için %15 indirim uygulanıyor\n");
	}
	printf("ödemeniz gereken ücret: %d",u);
			
	printf("\ntekrar menüye dönmek için 9'a basın, aksi bir tuş çıkışa yönlendirecektir: ");
		scanf("%d",&a);
		printf("\n");		
		if(a == 9){
		goto menu;
		}else{
		}	
	
return 0; }
