#include<stdio.h>
#include<string.h>

struct calisan{
	
	char ad[31];
	char soyad[31];
	int kimlikno;
	char telno[31];
	char departman[40];
	char okul[40];
	int yas;
	
	
}calisan1,calisan2;



int main(){
	
	strcpy(calisan1.ad,"bedirhan");
	strcpy(calisan1.soyad,"komurcu");
	calisan1.kimlikno=123456;
	strcpy(calisan1.telno,"5453160000");												// Çalışan 1 için değerleri giriyoruz
	strcpy(calisan1.departman,"bilgisayar muhendisligi");
	strcpy(calisan1.okul,"KBU");
	calisan1.yas=20;
	
	printf("calisanin adi: %s\n",calisan1.ad);
	printf("calisanin soyadi: %s\n",calisan1.soyad);
	printf("calisanin numarasi: %d\n",calisan1.kimlikno);
	printf("calisanin telefonu: %s\n",calisan1.telno);                             
	printf("calisanin departmani: %s\n",calisan1.departman);
	printf("calisanin okulu: %s\n",calisan1.okul);
	printf("calisanin yasi: %d\n\n",calisan1.yas);
	
return 0;}
