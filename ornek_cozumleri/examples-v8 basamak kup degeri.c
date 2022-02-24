#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"Turkish");

int q=1;

while(q<1000){

 if(q==((q%10)*(q%10)*(q%10))+(((q%100)/10)*((q%100)/10)*((q%100)/10))+((q/100)*(q/100)*(q/100))){
 	printf("%d",q);
	 printf("\n");}
 	
q++;
}


return 0;}
