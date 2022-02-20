#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

	
	
	
	//3 aday arasýndan seçim yapýlacak, kazananý görmek için 5e basýlacak.
	
	int secim,a=0,b=0,c=0;

	menu: printf("1-Ahmet\n2-Burak\n3-Cem\n");
	printf("Bir kiþi seçimi yapýnýz.[1-3]:\n");
	
	do{
		scanf("%d",&secim);
		
		if(secim==1){
			a++;
			printf("Ahmet 1 oy kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
	}
		else if(secim==2){
			b++;
			printf("Burak 1 oy kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
	 }
	 	else if(secim==3){
	 		c++;
			printf("Cem 1 oy kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
	 	}
	 	else if(secim!=5){
	 		printf("\nyanlýþ giriþ yaptýnýz. Tekrar deneyin\n");
	 		printf("\n");
	 		goto menu;
		 }
		
		
		
	}while(secim!=5);
	
	printf("Ahmet = %d\n",a);
	printf("Burak = %d\n",b);
	printf("Cem = %d\n",c);
	
	if(a>b && a>c){  
	printf("\nKazanan Ahmet. Oy sayýsý: %d",a);
	goto menu3;
	}else if(b>a && b>c){
		printf("\nKazanan Burak. Oy sayýsý: %d",b);
		goto menu3;
	}else if(c>a && c>b){
	  	printf("\nKazanan Cem. Oy sayýsý: %d",c);
	  	goto menu3;
	}else{
		printf("\nberaberlik söz konusu. Bir oy hakký daha tanýndý.\n");
		menu2: printf("kazananý belirlemek için berabere kalan kiþiler arasýnda bir seçim yapýnýz: ");
	}
				scanf("%d",&secim);
				
		if(b>c && a>c){//A ÝLE B BERABERE
			if(secim==1){
			a++;
			printf("Ahmet son oyu kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Ahmet");}
			
			else if(secim==2){
			b++;
			printf("Burak son oyu kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Burak");}
	 			
			else{
			printf("yanlýþ seçim yaptýnýz.\nLütfen ");
			goto menu2;}}
			
		else if(b>a && c>a){//B ÝLE C BERABERE
			if(secim==2){
			b++;
			printf("Burak son oyu kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Burak");}
			
			else if(secim==3){
	 		c++;
			printf("Cem son oyu kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Cem");}
			
			else{
			printf("yanlýþ seçim yaptýnýz.\nLütfen ");
			goto menu2;}}
			
		else if(a>b && c>b){// A ÝLE ANAN BERABERE
			if(secim==1){
			a++;
			printf("Ahmet son oyu kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Ahmet");}
			
			else if(secim==3){
	 		c++;
			printf("Cem son oyu kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Cem");}
			
			else{
			printf("yanlýþ seçim yaptýnýz.\nLütfen ");
			goto menu2;}}
			
		else if(a==b && b==c){ //ÜÇÜDE BERABERE
			if(secim==1){
			a++;
			printf("Ahmet son oyu kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Ahmet");
	}
			else if(secim==2){
			b++;
			printf("Burak son oyu kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Burak");
	 }
	 		else if(secim==3){
	 		c++;
			printf("Cem son oyu kazandý. Anlýk oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Cem");
	 	}
			else{
			printf("yanlýþ seçim yaptýnýz.\nLütfen ");
			goto menu2;	}
			
		}
		

	menu3:
		return 0;	

}
/*
	//Do while döngüsü
	//kullanýcý 0 yazana kadar sayýlarý toplama
	
	int sayi,toplam;
	menu: printf("(toplama iþlemini tamamlamak için 0 giriniz.)\n");

	do{
		printf("toplamak istediðiniz deðer: ");
		scanf("%d",&sayi);
		toplam+=sayi; // a += b -->   a = a + b
		
	}while(sayi!=0); //parantez içi saðlanýyorsa döngü baþa döner	
	
	printf("sonuç = %d",toplam);
	printf("\n");
	if(toplam==31){
		printf("\nQPWLDQWLPDQPLWDPQLWDPQLWDÐQD\n\a");
			printf("\n"); }
	
	else if(toplam==69){
		printf("\nÐÞQWDÐÞQWDÐÞQWDÐÞQWDQWLDQWO\n\n\a");
	}
 	else{
	}	toplam=0;	goto menu;	

return 0;}*/
	

