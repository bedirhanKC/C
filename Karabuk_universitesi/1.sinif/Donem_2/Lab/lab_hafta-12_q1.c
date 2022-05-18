/*
Bedirhan Kömürcü
18.05.2022
lab hafta 12
*/

#include<stdio.h>
#include<stdlib.h>

struct ogrenci{
	
	int no;
	char ad[40];
	char bolum[40];
	
};

typedef struct ogrenci ogrenci;

void VeriAlma(FILE *myptr){
	
	char bugfix[2];
	ogrenci temp;
	
	printf("\n----------Veri Alma-----------------\n EOF girilene kadar veri alinacaktir.\n");
	
		printf("\n");
		printf("[Ogrenci no] [isim] [bolum] giriniz : ");
		scanf("%d %s %s",&temp.no,temp.ad,temp.bolum);
	
	while(!feof(stdin)){
		
		fprintf(myptr,"%s %d %s \n",temp.ad,temp.no,temp.bolum);
		
		printf("[Ogrenci no] [isim] [bolum] giriniz : ");
		scanf("%d %s %s",&temp.no,temp.ad,temp.bolum);
				
	}
	
	printf("\n------Veri ekleme islemi tamamlandi------------\n\n");
	
}

void VeriYazma(FILE *myptr){
	
	ogrenci temp;
	
	fscanf(myptr,"%s %d %s",temp.ad,&temp.no,temp.bolum);
	
	printf("\n-----Ogrenci Listesi-----------\n");
	
	while(!feof(myptr)){
		
		printf("%d %s %s \n",temp.no,temp.ad,temp.bolum);		
		fscanf(myptr,"%s %d %s",temp.ad,&temp.no,temp.bolum);
		
	}
	
	printf("-------Listeleme islemi tamamlandi.-----\n\n");
		
}

int IsimArama(FILE *myptr, char name[]){
	
	ogrenci temp;
	
	fscanf(myptr,"%s %d %s",temp.ad,&temp.no,temp.bolum);
		
	while(!feof(myptr)){
		
		if(strcmp(temp.ad,name)==0){
			
			printf("\naradiginiz ogrenci ; \n");
			printf("%d %s %s \n-------------\n",temp.no,temp.ad,temp.bolum);
			return 1;
			
		}else fscanf(myptr,"%s %d %s",temp.ad,&temp.no,temp.bolum);
		
	}
	
	printf("\nAradiginiz ogrenci bulunamadi.\n");
	return 0;
	
}	

int main(){
	
	FILE *myptr;
	
	int kontrol;
	char name[40];
	char bugfix[2];
	
	while(1){
		
		printf("----------------MENU---------------\n1-Dosya olusturma\n2-Listeleme\n3-Yeni Kayit Ekleme\n4-Isme gore arama\n5-Cikis\nBir veri girisi gerceklestiriniz [1-5] : ");
		scanf("%d",&kontrol);
		if(kontrol==5){
			
			printf("\nCikis gerceklestiriliyor...");
			break;
			
		}
		
		switch(kontrol){
		
			case 1:
			
				myptr=fopen("OgrenciVerileri.txt","w");			
				if(myptr==NULL) printf("\nDosya acilamadi.\n");
				VeriAlma(myptr);
				fclose(myptr);
			
			break;
		
			case 2:
				
				myptr=fopen("OgrenciVerileri.txt","r");
				if(myptr==NULL) printf("\nDosya acilamadi.\n");
				VeriYazma(myptr);
				fclose(myptr);
			
			break;
			
			case 3:
				
				myptr=fopen("OgrenciVerileri.txt","a");
				if(myptr==NULL) printf("\nDosya acilamadi.\n");
				VeriAlma(myptr);
				fclose(myptr);
				
			break;
			
			case 4:
				
				myptr=fopen("OgrenciVerileri.txt","r");
				if(myptr==NULL) printf("\nDosya acilamadi.\n");
				printf("Aramak istediginiz ismi giriniz : ");
				gets(bugfix);
				gets(name);
				IsimArama(myptr,name);
				fclose(myptr);
				
			break;
			
			case 5:
				
				printf("\nCikis gerceklestiriliyor...\n");
				
			break;
			
			default:
				
				printf("\nYanlis giris gerceklestirdiniz.\n");
				
			break;
		
		}
	}
		
return 0;
}
