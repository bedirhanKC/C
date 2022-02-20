#include<stdio.h>

int main(){
	
	int sayi,sifre,a=3;
	sifre=3131;
	
	printf("Bu program sizi mehdi ilan etmez, ama size Turkiye'de gerceklesmis bir anket sonucunu verir.\n\n");
	
gir:printf("Ogrenmek icin sifreyi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi!=sifre){
		printf("\a\nyanlis giris yaptiniz.\n");
		a--;
		if(a==0){
			printf("baska hakkiniz kalmadi, sistem kapatiliyor...");
			return 0;
		}
		printf("%d hakkiniz kaldi\n\n",a);
		goto gir;
	}
printf("\n2019da yapilan ankete gore, o donemdeki koyun orani yuzde 51,64'dir");
	
	return 0;
}
















