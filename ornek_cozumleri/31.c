#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void std(int dizi[]){
	
	int i,a=0,b=0,c=0,d=0,e=0,f=0;
	
	for(i=0;i<365;i++){
		
		if(dizi[i]>=-20 && dizi[i]<-10) a++;
		else if(dizi[i]>=-10 && dizi[i]<0) b++;
		else if(dizi[i]>=0 && dizi[i]<10) c++;
		else if(dizi[i]>=10 && dizi[i]<20) d++;
		else if(dizi[i]>=20 && dizi[i]<30) e++;
		else f++;

	}
	
	printf("[-20,-10):%d \n",a);
	printf("[-10,0):%d \n",b);
	printf("[0,10):%d \n",c);
	printf("[10,20):%d \n",d);
	printf("[20,30):%d \n",e);
	printf("[30,40):%d \n",f);
	
}

int main()
{

int i,sicakliklar[365];
	

for(i=0;i<365;i++){
	scanf("%d",&sicakliklar[i]);
}

std(sicakliklar);

return 0;
}
