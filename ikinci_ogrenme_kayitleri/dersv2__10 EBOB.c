#include<stdio.h>
#include<math.h>

int main(){
	int sayi1,sayi2,buyuksayi,kucuksayi,kalan;
bas:		
	do{
		printf("EBOB degerini bulmak istediginiz 1. sayiyi giriniz:");
		scanf("%d",&sayi1);
		printf("EBOB degerini bulmak istediginiz 2. sayiyi giriniz:");
		scanf("%d",&sayi2);
	
	}while(sayi1<=0 || sayi2<=0);
	
	if(sayi1>sayi2){
		buyuksayi=sayi1;
		kucuksayi=sayi2;
	}else{
		buyuksayi=sayi2;
		kucuksayi=sayi1;
	}
	
	kalan = buyuksayi%kucuksayi;
	printf("\n\nDonguye girmeden onceki degerler: %d(kalan)=%d(buyuksayi)mmm%d(kucuksayi)\n\n",kalan,buyuksayi,kucuksayi);
	
	while(kalan!=0){
		
		if(kalan>=kucuksayi){
			buyuksayi=kalan;
		}else{
			buyuksayi=kucuksayi;
			printf("buyuksayi=%d\n",buyuksayi);
			kucuksayi=kalan;
			printf("kucuksayi=%d\n",kucuksayi);
			printf("kalan=%d\n",kalan);
		}
		
		kalan = buyuksayi%kucuksayi;
		printf("\n%d(kalan)=%d(buyuksayi)mmm%d(kucuksayi)\n",kalan,buyuksayi,kucuksayi);
	}
	
	printf("EBOB(%d,%d)=%d\n\n\n",sayi1,sayi2,kucuksayi);
	
	goto bas;
	
	return 0;
}
