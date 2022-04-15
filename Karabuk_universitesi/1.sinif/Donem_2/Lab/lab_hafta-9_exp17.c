/*
Bedirhan Kömürcü
2010206036
lab hafta 9
*/

#include<stdio.h>
#include<string.h>

struct player{
	
	char pname[20];
	
}p1;

char* play(struct player *temp_p1){
	
	
	strcpy(temp_p1->pname,"kohli");
	return temp_p1->pname;
	
}

main(){
	
	
	strcpy(p1.pname,"dhoni");
	printf("%s %s",p1.pname,play(&p1));
	
}


