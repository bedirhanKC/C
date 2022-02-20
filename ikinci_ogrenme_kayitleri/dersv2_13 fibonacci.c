#include<stdio.h>

int main(){
	
	int n,a,i,x,toplam,sayi1,sayi2;
	
menu:printf("N'e kadar olan fibonacci dizisini gormek icin 1'i,\nN kadar elemani olan fibonacci dizisini gormek icin 2'yi tuslayiniz.\n");
	scanf("%d",&a);
		
	if(a<1 || a>2){
		
		printf("\a\nyanlis tuslama yaptiniz.\n\nLutfen ");
		goto menu;
	}

menu2:printf("\nbir N degeri giriniz: ");
	scanf("%d",&n);
	
	if(n<=0){
		
		printf("\a\nyanlis tuslama yaptiniz.\n\n");
		goto menu2;
	}else if(n==1){
		printf("\n1\t");
		goto final;
	}
	
	sayi1=1;
	sayi2=1;
	toplam=0;

	printf("\n1\t1\t");
	
sw:	switch(a){
		case 1:
		
		
		while(sayi1+sayi2<n){
		
		toplam=sayi1+sayi2;
		sayi1=sayi2;
		sayi2=toplam;
		printf("%d\t",toplam);	
		
		}
		
		break;
		
		case 2: 
		
		for(i=0;i<n-2;i++){
			
		toplam=sayi1+sayi2;
		sayi1=sayi2;
		sayi2=toplam;
		printf("%d\t",toplam);	
		
		}	
		
		break;
		
		default:
		goto menu;
		
		break;
	}
	
	
final:	printf("\n\nAna menuye donmek icin 5i\nTekrar N degeri secmek icin 9u tuslayin\nAksi bir tus, cikisa yonlendirecektir.");
	scanf("%d",&x);
	
	switch(x){
		
		case 5:
			printf("\n\n");
			goto menu;
			break;
			
		case 9:
			printf("\n\n");
			goto menu2;
			break;
			
		default:
			break;
	}
	
	
	return 0;
}
