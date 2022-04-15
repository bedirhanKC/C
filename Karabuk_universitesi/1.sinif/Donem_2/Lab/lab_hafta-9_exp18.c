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

void display(struct student s);

main(){
	
	
	struct student s1;
	
	printf("enter name ");
	scanf("%[^\n]%*c",&s1.age);
	
	display(s1);
	
}

void display(struct student s){
	
	printf("\nDisplaying information \n");
	printf("name: %s \n",s.name);
	printf("age : %d",s.age);
}
