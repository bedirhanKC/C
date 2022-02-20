#include<stdio.h>
#include<math.h>

int main(){
	
	int taban,us;
	
	printf("ussunu alacaginiz ifadenin tabanini giriniz: ");
	scanf("%d",&taban);
	printf("ussunu alacaginiz ifadenin ussunu giriniz: ");
	scanf("%d",&us);
	
	int sonuc;
	
	sonuc = pow(taban,us);
	
	printf("sonuc = %d",sonuc);
	
	
	return 0;
}
