/*
Bedirhan K�m�rc�
09.05.2022
16.45
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node* next;
	
};

typedef struct node node;

int main(){
	
	int count=0;
	int temp;
	node *head,*p;
	
	while(1){ //bu d�ng� i�erisinde -1  girilene kadar veri al�yoruz.
		
		printf("Bir sayi giriniz [-1 girilene kadar liste olusturulacaktir.] : ");
		scanf("%d",&temp);
		
		if(temp==-1) break;
		
		if(count==0){
			
			head=(node *)malloc(sizeof(node));
			p=head;
			
		}else{
			
			p->next=(node *)malloc(sizeof(node));
			p=p->next;
			
		}
			
		p->data=temp;
		p->next=NULL;
		count++;
		
	}
	
	p=head;
	
	printf("\n");
	
	while(p!=NULL){ //bu d�ng� i�erisinde ise en son yazd�rma i�lemi ger�ekle�tiriyoruz.
		
		printf("%d ",p->data);
		
		p=p->next;
		
	}	
	
	return 0;
}
