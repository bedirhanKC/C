#include<stdio.h>

int main(){
	
	int i,x,y,sayi,toplam=0;
	
menu:printf("girdiginiz iki sayi arasindaki sayilari;\nkucukten buyuge dogru yazdirmak icin 1'e\niki sayi arasindaki degerleri toplamak icin 2'ye basin.\n\n");
	scanf("%d",&sayi);
	
		if(sayi>2||sayi<1){
			goto menu;
		}
		
	printf("sayi 1:");
	scanf("%d",&x);
	printf("sayi 2:");
	scanf("%d",&y);
	
	switch(sayi){
		
	case 1:
		if(x<y){
			for(;x<=y;x++){		
			printf("%d\t",x);}
		}
		else if(y<x){
	
			for(;y<=x;y++){		
			printf("%d\t",y);}
		}
		else{
			printf("girdiginiz iki sayi birbirine esittir.");
		}
		break;
		
	case 2:
	
		if(x<y){
			for(;x<=y;x++){		
			toplam+=x;}
		}
		else if(y<x){
			for(;y<=x;y++){		
			toplam+=y;}
		}
		else{
			printf("girdiginiz iki sayi birbirine esittir.");
		}
		printf("toplam = %d",toplam);
		break;		
	}

		
	return 0;
}
