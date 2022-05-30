/*
Bedirhan Kömürcü
26.05.2022
19.24
*/

#include<stdio.h>
#include<stdlib.h>

struct musteri{
	
	int HesapNo;
	char isim[30];
	char soyisim[30];
	double bakiye;
	
};

typedef struct musteri musteri;

void YeniListe(){
	
	FILE *myptr;
	musteri temp={0,"","",0.0};
	
	int i;
	
	myptr=fopen("Banka.dat","w");
	
	for(i=1;i<21;i++){
		
		temp.HesapNo=i;
		
		fwrite(&temp,sizeof(musteri),1,myptr);
		
	}
	
	fclose(myptr);
}

void YeniKullanici(){
	
	FILE *myptr;
	musteri temp;
	
	myptr=fopen("Banka.dat","r+");
	
	int arama;
	char bugfix[3];
	
	printf("almak istediginiz hesap numarasini giriniz : ");
	scanf("%d",&arama);
	
	fseek(myptr,(arama-1)*sizeof(musteri),SEEK_SET);
	
	printf("isim giriniz : ");
	gets(bugfix);
	gets(temp.isim);
	printf("soyisim giriniz : ");
	gets(temp.soyisim);
	printf("bakiye giriniz : ");
	scanf("%lf",&temp.bakiye);
	temp.HesapNo=arama;
	
	fwrite(&temp,sizeof(musteri),1,myptr);
	
	printf("\nYazdirma islemi basariyla tamamlandi;\n%d %s %s %.2lf \n",temp.HesapNo,temp.isim,temp.soyisim,temp.bakiye);
	
}

void Listeleme(){
	
	FILE *myptr;
	musteri temp;
	
	int i;
	
	myptr=fopen("Banka.dat","r");
	
	printf("\n--------------LIST------------------\n");
	
	for(i=1;i<21;i++){
		
		fread(&temp,sizeof(musteri),1,myptr);
		printf("%d %s %s %.2lf \n",temp.HesapNo,temp.isim,temp.soyisim,temp.bakiye);
		
		
	}
	
	fclose(myptr);
	
	
}

int main(){
	
	YeniListe();
	YeniKullanici();
	Listeleme();
	
}
