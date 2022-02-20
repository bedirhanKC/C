#include<stdio.h>

int main(){
	
	int sayi,sifre,hak=3;
	sifre=1234;
	
	printf("Bu program size Turkiye'de gerceklesmis bir arastirma sonucunu verir.\n\n");
	
gir:	printf("Ogrenmek icin sifreyi giriniz: ");
	scanf("%d",&sayi);
	
	if(sayi!=sifre){
		printf("\a\nyanlis giris yaptiniz.\n");
		hak--;
		if(hak==0){
			printf("baska hakkiniz kalmadi, sistem kapatiliyor...");
			return 0;
		}
		printf("%d hakkiniz kaldi\n\n",hak);
		goto gir;
	}
printf("\n2019da yapilan arastirmaya gore, o donemdeki koyun orani yuzde 51,64'dir");
	
	return 0;
}
