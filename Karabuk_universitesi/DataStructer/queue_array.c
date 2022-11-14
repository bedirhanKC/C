#include<stdlib.h>
#include<stdio.h>

#define QUEUE_SIZE 3

struct queue{
	
	int cnt;
	int front;
	int rear;
	int data[QUEUE_SIZE];
	
};

typedef struct queue queue;

void initialize(queue *q){
	
	q->front = 0;
	q->rear = -1;
	q->cnt = 0;
	
}

void enqueue(queue *q , int data){
	
	if(q->cnt == QUEUE_SIZE)
		printf("array is full \n");
	else{
		
		q->rear++;
		
		if(q->rear == QUEUE_SIZE)
			q->rear = 0;
			
		q->data[q->rear] = data;
		q->cnt++;
		
	}
	
}

int dequeue(queue *q){
	
	if(q->cnt == 0){
		
		printf("array is empty \n");
		return -1;
		
	}
	
	else{
		
		int x = q->data[q->front];
		q->front++;
		
		if(q->front == QUEUE_SIZE)
			q->front = 0;
			
		q->cnt--;
		
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
	enqueue(q,6);
	printf("%d \n",dequeue(q));
	printf("%d \n",dequeue(q));
	printf("%d \n",dequeue(q));
	printf("%d \n",dequeue(q));
	
	
	
	
}
