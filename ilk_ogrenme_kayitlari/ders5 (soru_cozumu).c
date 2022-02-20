#include <stdio.h>
int main(){
	
	int a,sonuc;
	a=5;
	sonuc = a++;
	printf("sonuc: %d\n",sonuc);
	printf("a = %d\n",a);
	sonuc = a++;
	printf("sonuc: %d\n",sonuc);
	printf("a = %d\n",a);
	
	
	// Soru Çözümü
	// 20(10X + 5y) + 3(2x+8y)
	
	int x,y,cevap;
	printf("\n20(10x + 5y) + 3(2x+8y) sorusunun cevabi icin;\n");
	printf("x sayisini giriniz: ");
	scanf("%d",&x);
	printf("Y Sayisini giriniz: ");
	scanf("%d",&y);
	cevap = 20*(10*x + 5*y) + 3*(2*x + 8* y);
	printf("20*(10*%d + 5*%d) + 3*(2*%d + 8*%d) = %d",x,y,x,y,cevap);
	
	
	return 0;
	

}
