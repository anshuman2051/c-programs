#include <stdio.h>
#include <stdlib.h>

typedef  struct node* node;
struct node{
	int data;
	node next;
};

node tos = NULL, start = NULL;

node create( int data ){
	node temp = malloc(sizeof(struct node));
	temp -> data = data;
	temp -> next = NULL;
	return temp;
}

void push(node n){
	if(start == NULL)
		start = tos = n;
	else{
		node temp = tos;
		temp -> next = n;	
		tos = n;
	}
}

int pop(void){
	if(start == NULL){
		puts("stack empty!");
		return -1;
	}
	else{
		node prev,temp = start;
		while(temp -> next){
			prev = temp;
			temp = temp -> next;
		}
		tos = prev;
		tos -> next = NULL;
		int val = temp->data;
		free(temp);
		return val;

	}
}

void peek(){
	if( !tos )
		puts("empty can't print");
	else{
		node temp = start;
		while(temp){
			printf("%-3d", temp -> data);
			temp = temp -> next;
		}
		puts("");
			
	}

}
int main(){
	for(int i = 0; i < 5 ; i++){
		node n = create(i+3);
		push(n);
	}
	peek();
	printf("pooped value %d\n", pop());

	peek();
}
