#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

	
	
	
	//3 aday aras�ndan se�im yap�lacak, kazanan� g�rmek i�in 5e bas�lacak.
	
	int secim,a=0,b=0,c=0;

	menu: printf("1-Ahmet\n2-Burak\n3-Cem\n");
	printf("Bir ki�i se�imi yap�n�z.[1-3]:\n");
	
	do{
		scanf("%d",&secim);
		
		if(secim==1){
			a++;
			printf("Ahmet 1 oy kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
	}
		else if(secim==2){
			b++;
			printf("Burak 1 oy kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
	 }
	 	else if(secim==3){
	 		c++;
			printf("Cem 1 oy kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
	 	}
	 	else if(secim!=5){
	 		printf("\nyanl�� giri� yapt�n�z. Tekrar deneyin\n");
	 		printf("\n");
	 		goto menu;
		 }
		
		
		
	}while(secim!=5);
	
	printf("Ahmet = %d\n",a);
	printf("Burak = %d\n",b);
	printf("Cem = %d\n",c);
	
	if(a>b && a>c){  
	printf("\nKazanan Ahmet. Oy say�s�: %d",a);
	goto menu3;
	}else if(b>a && b>c){
		printf("\nKazanan Burak. Oy say�s�: %d",b);
		goto menu3;
	}else if(c>a && c>b){
	  	printf("\nKazanan Cem. Oy say�s�: %d",c);
	  	goto menu3;
	}else{
		printf("\nberaberlik s�z konusu. Bir oy hakk� daha tan�nd�.\n");
		menu2: printf("kazanan� belirlemek i�in berabere kalan ki�iler aras�nda bir se�im yap�n�z: ");
	}
				scanf("%d",&secim);
				
		if(b>c && a>c){//A �LE B BERABERE
			if(secim==1){
			a++;
			printf("Ahmet son oyu kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Ahmet");}
			
			else if(secim==2){
			b++;
			printf("Burak son oyu kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Burak");}
	 			
			else{
			printf("yanl�� se�im yapt�n�z.\nL�tfen ");
			goto menu2;}}
			
		else if(b>a && c>a){//B �LE C BERABERE
			if(secim==2){
			b++;
			printf("Burak son oyu kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Burak");}
			
			else if(secim==3){
	 		c++;
			printf("Cem son oyu kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Cem");}
			
			else{
			printf("yanl�� se�im yapt�n�z.\nL�tfen ");
			goto menu2;}}
			
		else if(a>b && c>b){// A �LE ANAN BERABERE
			if(secim==1){
			a++;
			printf("Ahmet son oyu kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Ahmet");}
			
			else if(secim==3){
	 		c++;
			printf("Cem son oyu kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Cem");}
			
			else{
			printf("yanl�� se�im yapt�n�z.\nL�tfen ");
			goto menu2;}}
			
		else if(a==b && b==c){ //���DE BERABERE
			if(secim==1){
			a++;
			printf("Ahmet son oyu kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Ahmet");
	}
			else if(secim==2){
			b++;
			printf("Burak son oyu kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Burak");
	 }
	 		else if(secim==3){
	 		c++;
			printf("Cem son oyu kazand�. Anl�k oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Cem");
	 	}
			else{
			printf("yanl�� se�im yapt�n�z.\nL�tfen ");
			goto menu2;	}
			
		}
		

	menu3:
		return 0;	

}
/*
	//Do while d�ng�s�
	//kullan�c� 0 yazana kadar say�lar� toplama
	
	int sayi,toplam;
	menu: printf("(toplama i�lemini tamamlamak i�in 0 giriniz.)\n");

	do{
		printf("toplamak istedi�iniz de�er: ");
		scanf("%d",&sayi);
		toplam+=sayi; // a += b -->   a = a + b
		
	}while(sayi!=0); //parantez i�i sa�lan�yorsa d�ng� ba�a d�ner	
	
	printf("sonu� = %d",toplam);
	printf("\n");
	if(toplam==31){
		printf("\nQPWLDQWLPDQPLWDPQLWDPQLWD�QD\n\a");
			printf("\n"); }
	
	else if(toplam==69){
		printf("\n��QWD��QWD��QWD��QWDQWLDQWO\n\n\a");
	}
 	else{
	}	toplam=0;	goto menu;	

return 0;}*/
	

