#include<stdio.h>
#include<stdlib.h>

#define STACK_SIZE 3

struct node{
	
	int data;
	struct node* next;
	
};

// node* temp;
// temp->next;
// stk->top->next;
// stk->top->data;

struct stack{
	
	int cnt;
	struct node* top;
	
};

typedef struct stack stack;
typedef struct node node;

void initialize(stack *stk){
	
	stk->cnt = 0;
	stk->top = NULL;
	
}

void push(stack *stk, int data){
	
	if(stk->cnt == STACK_SIZE)
		printf("\nstack is full\n\n");
	
	else{
		
		struct node* temp = (node *)malloc(sizeof(node));
		temp->data = data;
		temp->next = stk->top;
		stk->top = temp;
		stk->cnt ++;
		
	}
}

int pop(stack *stk){
	
	if(stk->cnt == 0){
		
		printf("\nstack is empty\n\n");
		return -1;
		
	}
		
	else{
		
		int x = stk->top->data;
		
		node *temp = stk->top;
		stk->top = stk->top->next;
		free(temp);
		stk->cnt --;
		
		return x;
		
	}	
}


int main(){
	
	stack *n = (stack *)malloc(sizeof(stack));
	initialize(n);
	push(n,5);
	push(n,2);
	push(n,1);
	push(n,7);
	printf("%d \n",pop(n));
	printf("%d \n",pop(n));
	printf("%d\n",pop(n));
	printf("%d",pop(n));
	
	
	return 0;
}
