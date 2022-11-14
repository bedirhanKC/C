#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node* left;
	struct node* right;

};

typedef struct node node;

node* newNode(int x){
	
	node *newBough = (node *)malloc(sizeof(node));
	
	newBough->data = x;
	newBough->left = NULL;
	newBough->right = NULL;
	
	return newBough;
	
}

node* insert(node* root, int x){
	
	if(root == NULL)
		root=newNode(x);
	
	else{
		
		if(x < root->data)
			root->left = insert(root->left,x);
		
		else
			root->right = insert(root->right,x);
		
	}
		
	
	return root;
	
}

void print(node *root){
	
	if(root == NULL)
		return;
	
	else{
		
		print(root->left);
		printf("%d \n",root->data);
		print(root->right);
		
	}
	
}

int main(){
	
	node *newTree = (node *)malloc(sizeof(node));
	newTree = NULL;
	
	newTree = insert(newTree,20);
	newTree = insert(newTree,15);
	newTree = insert(newTree,5);
	newTree = insert(newTree,125);
	newTree = insert(newTree,12);
	newTree = insert(newTree,71);
	newTree = insert(newTree,42);
	newTree = insert(newTree,11);
	newTree = insert(newTree,31);
	
	print(newTree);
	
	
	
	return 0;
}

