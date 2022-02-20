#include<stdio.h>
#include<stdlib.h>

int main(){
	
int r;

printf("yaricapi giriniz: ");
scanf("%d",&r);
	if(r<=0){
		printf("\ayanlis giris yaptiniz!");
		return 0;
	}

printf("alan=%.2f\n",r*r*3.14);
printf("cevre=%.2f",2*r*3.14);

return 0;
}
