#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node* next;
	
};

typedef struct node node;

node *addFront(node *head,int key){
	
	node* temp=(node*) malloc(sizeof(node));
	
	temp->data=key;
	temp->next=head;
	
	head=temp;
	
	return head;
	
}

node *addLast(node *head,int key){
	
	node* temp=(node*) malloc(sizeof(node));
	
	temp->data=key;
	temp->next=NULL;
	
	if(head==NULL) 
		head=temp;
	
	else{
		
		node *p;
		p=head;
		
		while(p->next != NULL)
			p=p->next;
			
		p->next=temp;
		
	}
	
	return head;	
	
}

void printList(node* head){
	
	node* p=head;
	
	if(p==NULL)
		printf(" \n List empty \n\n");
	
	else{
		
		printf("\n------LIST---------\n");
		
		while(p != NULL ){
			
			printf("%d \n",p->data);
			
			p=p->next;
			
		}
		printf("\n");
		
	}
}

void printListReverse(node *head){
	
	node* p=head;
	
	if(p==NULL)
		printf("\n----------LIST REVERSE------------");
	
	else{
		
		printListReverse(p->next);
		printf("%d",p->data);
		
	}
	
	printf("\n");
	
}

int main(){
	
	node *head = (node*) malloc(sizeof(node));
	head=NULL;
	
	int choise,data;
	
	do{
		
		printf("--------MENU--------\n");
		printf("1- insert a node at front \n");
		printf("2- insert a node at end \n");
		printf("3- print the list \n");
		printf("4- print list reverse with recursive \n");
		printf("5- exit \n");
		
		printf("enter your choise : ");
		scanf("%d",&choise);
		
		switch(choise){
			
			case 1:
				
				printf("\n enter the value to insert to the front : ");
				scanf("%d",&data);
				
				head=addFront(head,data);
				
				printf("\nAdding completed successfully.\n\n");
				
			break;
			
			case 2:
				
				printf("\n enter the value to insert to the end : ");
				scanf("%d",&data);
				
				head=addLast(head,data);
				
				printf("\nAdding completed successfully.\n\n");
				
			break;
			
			case 3:
				
				printList(head);
				
			break;
			
			case 4:
				
				if(head==NULL)
					printf(" \n List empty \n");
				
				else
					printListReverse(head);
					
				printf("\n");
				
			break;
			
			case 5:
				
				printf("\n ending code...\n\n");
				
			break;
			
			default:
				
				printf("\nwrong character input.\n\n");
				
			break;
			
		}
		
	}while(choise != 5);
	
	
return 0;
}
