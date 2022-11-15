#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node *next;
	
};

typedef struct node node;

node* addFront(node *head, int x){
	
	node *temp = (node *)malloc(sizeof(node));
	temp->data=x;
	
	if(head==NULL){
		
		head = temp;
		temp->next=head;		
		
	}else{
		
		node *last = head;
		while(last->next != head) last=last->next;
		
		temp->next=head;
		last->next=temp;
		head = temp;
		
	}
	
	return head;
}

node *addLast(node *head , int x){
	
	node *temp = (node *)malloc(sizeof(node));
	temp->data = x;
	
	if(head == NULL){
		
		head = temp;
		temp->next = head;
		
	}else{
		
		node *last = head;
		
		while(last->next != head) last=last->next;
		
		last->next = temp;
		temp->next = head;
		
	}
	
	return head;
}

void printList(node *head){
	
	if(head==NULL) 
		printf("\nlist is empty \n\n");
	
	else{
		
		node *temp=head;
		printf("\n-----LIST-----\n%d\n",temp->data);
		temp = temp->next;
		
		while(temp != head){
						
			printf("%d\n",temp->data);
			temp = temp->next;
			
		}
		
		printf("\n");
	}
	
}

void printReverse(node *head){
	
	if(head ==  NULL)
		printf("\nlist is empty\n\n");
		
	else if(head->next == head){
		
		printf("\n----Reverse List---------\n%d\n",head->data);
		return;
		
	}else{
		
		node *temp=head->next;
		printReverse(temp);
		printf("%d\n",head->data);
		
	}	
}

node* deleteNode(node* head){
	
	int find=0;
	int x;
	
	if(head==NULL){
	
		printf("\nlist is empty \n\n");
		return head;
	
	}else{
		
						
		printf("\n enter the value to deleting : ");
		scanf("%d",&x);
				
		
		node *temp=head;
		node *before;
		
		if(temp->data == x){
			
			node *last = head;
			while(last->next != head) last=last->next;
			
			head = temp->next;
			last->next = head;
			free(temp);
			find=1;
			
		}else{
			
			while(temp->next != head){
				
				if(temp->next->data == x){
					
					node *deleted=temp->next;
					temp->next = deleted->next;
					free(deleted);
					find=1;
					
				}
				
				temp=temp->next;
				
			}
			
		}
		
	
			
		if(find == 1)
			printf("\n%d datasi silindi.\n\n",x);
		else
			printf("\n%d datasi bulunamadi.\n\n",x);
			
	}	
}

int main(){
	
	node *head = (node*) malloc(sizeof(node));
	head=NULL;
	
	int choise,data;
	
	do{
		
		printf("--------MENU--------\n");
		printf("1- insert a node at front \n");
		printf("2- insert a node at end \n");
		printf("3- delete a one node \n");
		printf("4- print the list \n");
		printf("5- print the reverse list \n");
		printf("6- exit \n");
		
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

				head=deleteNode(head);
				
			break;
			
			case 4:
				
				printList(head);
				
			break;
			
			case 5:
				
				printReverse(head);
				printf("\n");
				
			break;
			
			case 6:
				
				printf("\n ending code...\n\n");
				
			break;
			
			default:
				
				printf("\nwrong character input.\n\n");
				
			break;
			
		}
		
	}while(choise != 6);
	
	
return 0;
}
