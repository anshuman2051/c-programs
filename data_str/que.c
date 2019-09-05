#include <stdio.h>
#include <stdlib.h>

#define capacity 2

struct queue{
	int * data;
	int front;
        int rear;
};

typedef struct queue * que;

que create(){
	que q = malloc(sizeof(struct queue));
	q -> data = malloc(sizeof(int)*capacity );
	q -> front = q -> rear = -1;

	return q;
}

void enqueue(que q, int data){
	if(q -> front == -1)
		q -> front = q -> rear = 0;
	else if(q -> rear == capacity - 1){
		puts("queue overflow");
		return;
	}
	else
		(q -> rear)++;
	q -> data[q -> rear] = data;
}

int dequeue(que q ){
	if(q -> front == -1 || q -> front > q-> rear){
		puts("queue is empty");
		return -1;
	}
	else
		return q -> data[(q -> front)++];
}

void print(que q){
	int temp = q -> front;
	int temp2 = q -> rear;

	while(temp++ <= temp2)
		printf("%d\n", q-> data[temp-1]);
}
int main(){
	que q = create();
	enqueue(q ,5);
	enqueue(q ,5);
	enqueue(q ,5);
	print(q);

	puts("dequeing now");
	printf("%d",dequeue(q));
	printf("%d",dequeue(q));
	printf("%d",dequeue(q));
}
