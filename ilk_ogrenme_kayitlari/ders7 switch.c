#include <stdio.h>
int main(){

//switch case

	int sayi;
menu:	printf("bir sayi giriniz.[1-4]: ");
	scanf("%d",&sayi);
	switch(sayi){
		case 1:
			printf("bir");
			break;
		case 2:
			printf("iki");
			break;
		case 3:
			printf("üc");
			break;
		case 4:
			printf("dort");
			break;
		default:
			printf("Bir ile dort arasinda bulanan veri girisi yaptiniz.\n");
			
			goto menu;
	}
	
	return 0;

}
