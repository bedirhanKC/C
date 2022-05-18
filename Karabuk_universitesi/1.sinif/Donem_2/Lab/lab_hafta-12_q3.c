#include<stdio.h>
#include<stdlib.h>

struct ogrenci{
	
	int no;
	char ad[40];
	char bolum[40];
	
};

typedef struct ogrenci ogrenci;


void TxtOlusturma(FILE *myptr,FILE *mfptr){
	
	ogrenci temp;
	
	fread(&temp,sizeof(ogrenci),1,myptr);
	
	while(!feof(myptr)){
		
		fprintf(mfptr,"%d %s %s \n",temp.no,temp.ad,temp.bolum);		
		fread(&temp,sizeof(ogrenci),1,myptr);
		
	}
	
	printf("\n-------Olusturma islemi tamamlandi.-----\n\n");
		
}

int Listeleme(FILE *mfptr){
	
	ogrenci temp;
	
	fscanf(mfptr,"%d %s %s",&temp.no,temp.ad,temp.bolum);
	
	printf("\n-----Ogrenci Listesi-----------\n");
	
	while(!feof(mfptr)){
		
		printf("%d %s %s \n",temp.no,temp.ad,temp.bolum);		
		fscanf(mfptr,"%d %s %s",&temp.no,temp.ad,temp.bolum);
		
	}
	
	printf("-------Listeleme islemi tamamlandi.-----\n\n");
		
}	

int main(){
	
	FILE *myptr;
	FILE *mfptr;
	
	int kontrol;
	
	while(1){
		
		printf("----------------MENU---------------\n1-txt olusturma\n2-Listeleme\n3-Cikis\nBir veri girisi gerceklestiriniz [1-2] : ");
		scanf("%d",&kontrol);
		if(kontrol==3){
			
			printf("\nCikis gerceklestiriliyor...");
			break;
			
		}
		
		switch(kontrol){
		
			case 1:
			
				myptr=fopen("DataBase.dat","r");
				mfptr=fopen("Datalar.txt","w");		
				if(myptr==NULL || mfptr==NULL) printf("\nDosya acilamadi.\n");
				TxtOlusturma(myptr,mfptr);
				fclose(myptr);
				fclose(mfptr);
			
			break;
		
			case 2:
				
				mfptr=fopen("Datalar.txt","r");	
				if(mfptr==NULL) printf("\nDosya acilamadi.\n");
				Listeleme(mfptr);
				fclose(mfptr);
			
			break;
			
			default:
				
				printf("\nYanlis giris gerceklestirdiniz.\n");
				
			break;
		
		}
	}
		
return 0;
}
