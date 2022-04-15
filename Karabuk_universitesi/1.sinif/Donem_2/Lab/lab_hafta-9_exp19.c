/*
Bedirhan Kömürcü
2010206036
lab hafta 9
*/

#include<stdio.h>

struct student{
	
	char name[50];
	int age;
	
};

struct student getInformation();

main(){
	
	
	struct student s;
	
	s=getInformation();
	
	printf("\nDisplaying information \n");
	printf("name: %s",s.name);
	printf("\nroll : %d",s.age);
	
}

struct student getInformation(){
	
	struct student s1;
	
	printf("enter name : ");
	scanf("%[^\n]%*c",s1.name);
	
	printf("enter age : ");
	scanf("%d",&s1.age);
	
	return s1;
}
