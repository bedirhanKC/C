#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

	// break
	
	int i;
	for(i=0;i<10;i++){
		
		if(i==5){
			break; //5'e kadar devam eder, 5den sonra kendisini durdurur
		}
		
	printf("%d",i);
	printf("\n");
	}


	int a;
	for(a=0;a<10;a++){
	
	
		if(a==5){
			continue; // 5e geldiðinde döngüyü baþa alýr ve listede 5 olmaz ( 1-2-3-4-6-7-8...)
		}
	printf("%d",a);
	printf("\n");		
	}

return 0;	
}
