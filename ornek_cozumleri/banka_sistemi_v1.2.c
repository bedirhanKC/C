#include<stdio.h>
#include<stdlib.h>

struct Musteri{
	
	
	int HesapNo;
	char isim[30];
	char soyisim[30];
	double bakiye;
	
};

typedef struct Musteri musteri;

void YeniListe(){
	
	FILE *myptr;
	musteri temp={0,"","",0.0};
	
	myptr=fopen("Banka.dat","w");
	
	int i;
	
	for(i=1;i<21;i++){
		
		temp.HesapNo=i;
		
		fwrite(&temp,sizeof(musteri),1,myptr);
		
	}
	
	fclose(myptr);	
}

int YeniKullanici(){
	
	FILE *myptr;
	musteri temp;
	int gecici;
	char bugfix[3];
	
	myptr=fopen("Banka.dat","r+");
	
	printf("\nhesap numarasini giriniz : ");
	scanf("%d",&gecici);
		
	fseek(myptr,(gecici-1)*sizeof(musteri),SEEK_SET);
				
	printf("isminizi giriniz : ");
	gets(bugfix);
	gets(temp.isim);
	printf("soyisiminizi giriniz : ");
	gets(temp.soyisim);
	printf("bakiye giriniz : ");
	scanf("%lf",&temp.bakiye);
	temp.HesapNo=gecici;
	
	fwrite(&temp,sizeof(musteri),1,myptr);
	
	printf("\nKayit isleminiz basariyla tamamlanmistir;\n%d %s %s\n",temp.HesapNo,temp.isim,temp.soyisim,temp.bakiye);
	
	fclose(myptr);
	
}

void Listeleme(){
	
	FILE *myptr;
	musteri temp;
	
	myptr=fopen("Kullanicilar.dat","r");
	
	int i;
	
	printf("\n----------LIST---------------\n");
	
	for(i=1;i<21;i++){
		
		fread(&temp,sizeof(musteri),1,myptr);
		printf("%d   %s   %s %.2lf\n",temp.HesapNo,temp.isim,temp.soyisim,temp.bakiye);
		
	}
	
	printf("\n");
	
	fclose(myptr);
	
	
}

int main(){
	
	YeniListe();
	YeniKullanici();
	Listeleme();
	
}
