#include<stdio.h>
#include<stdlib.h>

#define STACK_SIZE 3

struct stack{
	
	int top;
	int data[STACK_SIZE];
	
};

typedef struct stack stack;

void reset(stack *stk){
	
	stk->top = -1;
	
}

void push(stack *stk , int data){
	
	if(stk->top+1 == STACK_SIZE)
		printf("\nstack is full\n\n");
	
	else{
		
		stk->top++;
		stk->data[stk->top] = data;
		
	}	
}

int pop(stack *stk){
	
	if(stk->top == -1){
		
		printf("\nstack is empty\n\n");
		return -1;
		
	}
		
	else{
		
		int x = stk->data[stk->top];
		stk->top--;
		
		return x;
		
	}	
}

int main(){
	
	stack *n = (stack *)malloc(sizeof(stack));
	reset(n);
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


