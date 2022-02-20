
#include <stdio.h>
int main(){
	
/* Ders 3
scanf fonksiyonu
*/

	
	int sayi;
	scanf("%d",&sayi);
	printf("scanf ile aldigimiz veri = %d\n",sayi);	
	
	
/* Ders 4
4 islem */

	int toplam,cikarma,carpma;
	float bolme;
	cikarma = sayi - 5;
	toplam = sayi + 4;
	carpma = sayi * 3;
	bolme = (float)sayi/2;
	printf("sayi + 4 = %d\nsayi - 5 = %d\nsayi * 3 = %d\nsayi / 2 = %.2f",toplam,cikarma,carpma,bolme);

	return 0;

}
