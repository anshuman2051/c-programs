#include <stdio.h>
#include <stdlib.h>

typedef struct node * node;
 struct node{
	int data;
	node next;	
};

node start = NULL;

void append(int data){
	node temp = malloc(sizeof(struct node));
	temp -> data = data;

	if(start == NULL)
		start = temp;
	else{
		node t2 = start;
		while(t2 -> next != start)
			t2 = t2 -> next;
		t2 -> next = temp;
	}
	temp -> next = start; // can't give at top cuz it will give uninit val of start which is bad
}

void print(){
	if( start == NULL)
		puts("list is empty");
	else{
		node temp = start;
		while( temp ->next != start){
			printf("%-3d", temp -> data);
			temp = temp -> next;
		}
		printf("%-3d", temp -> data);
	}
}

int delete(){
	if(start == NULL)
		puts("sorry! can't dequeue \nthe list is already empty");
	else{
		node temp = start;
		node prev_t;
		while(temp -> next != start){
			prev_t = temp;
			temp = temp -> next;
		}
		prev_t -> next = start;
		int val = temp -> data;
		free(temp);
		return val;
	}
}
int main(){
	append(5);
	append(5);
	append(5);
	append(6);
	append(8);
	print();
	printf("\n%d",delete());
	puts("printing");
	print();
}

