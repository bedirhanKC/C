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
	
	
	student *ogrenciler=(student *)malloc(5*sizeof(student));
	
	int i,j;
	char temp[20];

	
	
	for(i=0;i<5;i++){
		
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
	
}
