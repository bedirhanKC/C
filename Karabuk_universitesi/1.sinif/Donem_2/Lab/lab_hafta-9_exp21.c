
/*
Bedirhan Kömürcü
2010206036
lab hafta 9
*/

#include<stdio.h>

struct student{
	
	int number;
	char name[50];
	char surname[50];
	int midtermGrade;
	int finalGrade;
	float ortalama;
	
};

typedef struct student student;

int main(){
	
	int ogrenciSayisi;
	
	printf("girmek istediginiz ogrenci sayisini giriniz : ");
	scanf("%d",&ogrenciSayisi);
	
	printf("\n");
	
	student *ogrenciler=(student *)malloc(ogrenciSayisi*sizeof(student));
	
	int i,j;
	char temp[20];

	
	
	for(i=0;i<ogrenciSayisi;i++){
		
		printf("%d. ogrencinin numarasi : ",i+1);
		scanf("%d",&(ogrenciler+i)->number);
		printf("%d. ogrencinin adi : ",i+1);
		gets(temp);
		gets((ogrenciler+i)->name);
		printf("%d. ogrencinin soyadi : ",i+1);
		gets((ogrenciler+i)->surname);
		printf("%d. ogrencinin vize notu : ",i+1);
		scanf("%d",&(ogrenciler+i)->midtermGrade);
		printf("%d. ogrencinin final notu : ",i+1);
		scanf("%d",&(ogrenciler+i)->finalGrade);
		
		printf("\n");
		
	}
	
	for(i=0;i<ogrenciSayisi;i++){
		
		(ogrenciler+i)->ortalama=(((ogrenciler+i)->midtermGrade)*0.4)+(((ogrenciler+i)->finalGrade)*0.6);
		
	}
	
	student gecici;
	
	for(i=0;i<ogrenciSayisi-1;i++){
		
		for(j=0;j<ogrenciSayisi-1;j++){
			
			if((ogrenciler+j)->number>=(ogrenciler+j+1)->number){
				
				gecici =*(ogrenciler+j);
				*(ogrenciler+j)=*(ogrenciler+j+1);
				*(ogrenciler+j+1)=gecici;
				
			}
			
		}
		
	}
	
	printf("\n----------------\n");
	
	for(i=0;i<ogrenciSayisi;i++){
		
		printf("%d %s %s : %d %d = %.2f \n",(ogrenciler+i)->number,(ogrenciler+i)->name,(ogrenciler+i)->surname,(ogrenciler+i)->midtermGrade,(ogrenciler+i)->finalGrade,(ogrenciler+i)->ortalama);
		
	}
	
	return 0;
}
