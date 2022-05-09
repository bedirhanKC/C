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
	
	while(1){
		
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
	
	while(p!=NULL){
		
		printf("%d ",p->data);
		
		p=p->next;
		
	}	
	
	return 0;
}
