#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node* next;
	struct node* prev;
	
};

typedef struct node node;

node *addFront(node *head,int x){
	
	node *temp = (node *)malloc(sizeof(node));
	temp->data = x;
	
	temp->next = head;
	temp->prev = NULL;	
	if(head != NULL)
		head->prev = temp;
	
	head = temp;

	return head;
	
}

node *addLast(node *head, int x){
	
	node *temp = (node *)malloc(sizeof(node));
	temp->data = x;
	
	temp->next = NULL;
	
	if(head == NULL){
	
		head = temp;
		temp->prev = NULL;
		
	}else{
		
		node *lastNode=head;
	
		while(lastNode->next != NULL)
			lastNode = lastNode->next;
	
		lastNode->next = temp;
		temp->prev = lastNode;

		
	}
		
	return head;		
}

node* deleteNode(node *head, int silinecekDeger){
	
	node *temp = head;
	int bulunduMu = 0;
	
	if(temp == NULL){
		
		printf("\nList is empty\n\n");
		
	}else{
		
		while(temp != NULL){
			
			if(temp->data == silinecekDeger){
				
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				free(temp);
				
				bulunduMu = 1;
				return head;
				
			}
			
			temp= temp->next;
			
		}
		
		if(bulunduMu == 0)
			printf("\nöle bişe yok\n\n");
		
	}
	
	return head;	
}


void printList(node *head){
	
	node *temp = head;
	
	if(temp == NULL)
		printf("\nList is empty\n\n");
	
			
	else{
		
	while(temp->next != NULL)
		temp = temp->next;

		
		printf("\n-----------List---------\n");
		
		while(temp != NULL){
			
			printf("%d \n",temp->data);
			temp = temp->prev;
			
		}
	}
	
	printf("\n");
	
}


int main(){

	
	node *head = NULL;
	head = addFront(head,2);
	head = addFront(head,5);
	head = addLast(head,3);
	head = addLast(head,1);
	head = deleteNode(head,2);
	printList(head);
	

	
	return 0;
}
