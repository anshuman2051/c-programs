
#include <stdio.h>
#include <stdlib.h>


typedef struct node * node;
struct node{
	int data;
	node next;
};

node start = NULL;

node create(int data){
	node temp = malloc(sizeof(struct node));
	temp -> data = data;
	temp -> next = NULL;

	return temp;
}

void enqueue(int data){
	node t = create(data);
	if(start == NULL)
		start = t;	
	else{
		node temp = start;
		while(temp -> next != NULL){
			temp = temp -> next;
		}
		temp -> next = t;
	}
}

int dequeue(void){
	node temp = start;
	if(start == NULL)
		puts("queue is already empty!");
	else{
		node temp = start;
		start = start -> next;
		printf("%d\n",temp -> data);
		free(temp);
	}
}

void print(void){
	node temp = start;
	while(temp != NULL){
		printf("%d\n", temp -> data);
		temp = temp -> next;
	}
}
int main(){
	enqueue(5);
	enqueue(5);
	enqueue(5);
	enqueue(9999);
	dequeue();
	print();
}

