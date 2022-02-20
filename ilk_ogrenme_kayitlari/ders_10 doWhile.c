#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

	
	
	
	//3 aday arasından seçim yapılacak, kazananı görmek için 5e basılacak.
	
	int secim,a=0,b=0,c=0;

	menu: printf("1-Ahmet\n2-Burak\n3-Cem\n");
	printf("Bir kişi seçimi yapınız.[1-3]:\n");
	
	do{
		scanf("%d",&secim);
		
		if(secim==1){
			a++;
			printf("Ahmet 1 oy kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
	}
		else if(secim==2){
			b++;
			printf("Burak 1 oy kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
	 }
	 	else if(secim==3){
	 		c++;
			printf("Cem 1 oy kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
	 	}
	 	else if(secim!=5){
	 		printf("\nyanlış giriş yaptınız. Tekrar deneyin\n");
	 		printf("\n");
	 		goto menu;
		 }
		
		
		
	}while(secim!=5);
	
	printf("Ahmet = %d\n",a);
	printf("Burak = %d\n",b);
	printf("Cem = %d\n",c);
	
	if(a>b && a>c){  
	printf("\nKazanan Ahmet. Oy sayısı: %d",a);
	goto menu3;
	}else if(b>a && b>c){
		printf("\nKazanan Burak. Oy sayısı: %d",b);
		goto menu3;
	}else if(c>a && c>b){
	  	printf("\nKazanan Cem. Oy sayısı: %d",c);
	  	goto menu3;
	}else{
		printf("\nberaberlik söz konusu. Bir oy hakkı daha tanındı.\n");
		menu2: printf("kazananı belirlemek için berabere kalan kişiler arasında bir seçim yapınız: ");
	}
	scanf("%d",&secim);
				
		if(b>c && a>c){//A İLE B BERABERE
			if(secim==1){
			a++;
			printf("Ahmet son oyu kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Ahmet");}
			
			else if(secim==2){
			b++;
			printf("Burak son oyu kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Burak");}
	 			
			else{
			printf("yanlış seçim yaptınız.\nLütfen ");
			goto menu2;}}
			
		else if(b>a && c>a){//B İLE C BERABERE
			if(secim==2){
			b++;
			printf("Burak son oyu kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Burak");}
			
			else if(secim==3){
	 		c++;
			printf("Cem son oyu kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Cem");}
			
			else{
			printf("yanlış seçim yaptınız.\nLütfen ");
			goto menu2;}}
			
		else if(a>b && c>b){// A İLE ANAN BERABERE
			if(secim==1){
			a++;
			printf("Ahmet son oyu kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Ahmet");}
			
			else if(secim==3){
	 		c++;
			printf("Cem son oyu kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Cem");}
			
			else{
			printf("yanlış seçim yaptınız.\nLütfen ");
			goto menu2;}}
			
		else if(a==b && b==c){ //ÜÇÜDE BERABERE
			if(secim==1){
			a++;
			printf("Ahmet son oyu kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Ahmet");
	}
			else if(secim==2){
			b++;
			printf("Burak son oyu kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Burak");
	 }
	 		else if(secim==3){
	 		c++;
			printf("Cem son oyu kazandı. Anlık oy durumu: %d-%d-%d\n",a,b,c);
			printf("Kazanan Cem");
	 	}
			else{
			printf("yanlış seçim yaptınız.\nLütfen ");
			goto menu2;	}
			
		}
		

	menu3:
		return 0;	

}
