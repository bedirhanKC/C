#include<stdlib.h>
#include<stdio.h>

#define QUEUE_SIZE 3

struct node{
	
	int data;
	struct node* next;
	
};

struct queue{
	
	struct node* front;
	struct node* rear;
	int cnt;
	
};

void initialize(struct queue *q){
	
	q->front = NULL;
	q->rear = NULL;
	q->cnt = 0;
	
}

void enqueue(struct queue *q, int data){
	
	if(q->cnt == QUEUE_SIZE)
		printf("queue is full \n");
	
	else{
		
		struct node *temp = (struct node*)malloc(sizeof(struct node));
		temp->data = data;
		temp->next = NULL;
	
		if(q->cnt == 0)		
			q->front = temp;
		else
			q->rear->next = temp;
			
		q->rear = temp;
		q->cnt++;
		
	}
		
}

int dequeue(struct queue *q){
	
	if(q->cnt == 0){
		
		printf("queue is empty");
		return -1;
		
	}
		
	else{
		
		int x = q->front->data;
		
		struct node* temp = q->front;
		q->front = q->front->next;
		free(temp);
		q->cnt--;
		
		if(q->cnt == 0) 
			q->rear = NULL;
			
		return x;
		
	}
		
	
	
}

int main(){
	
	struct queue *q = (struct queue*)malloc(sizeof(struct queue));
	initialize(q);
	enqueue(q,1);
	enqueue(q,2);
	enqueue(q,3);
	enqueue(q,4);
	printf("%d \n",dequeue(q));
	printf("%d \n",dequeue(q));
	printf("%d \n",dequeue(q));
	printf("%d",dequeue(q));
	
	
	
	
}
