#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
//const int MAX_SIZE = 10;

int * stack;
int tos = -1;

int pop(){
	if(tos > -1){
		int val = stack[tos];
		tos--;
		return val;
	}
	else
		return -1;
}

void push(int data){
	if(tos < MAX_SIZE)
		stack[++tos] = data;
	else
		puts("stack overflow");
}
void peek(){
	if(tos == -1)
		puts("empty stack");
	else{
		int i = tos;
		while(i >= 0){
			printf("%d \n",stack[i]);
			i--;
		}
	}
}

void main(){
	stack = malloc(sizeof(int )* MAX_SIZE);
	puts("enter 1 to push");
	puts("enter 2 to pop");
	puts("enter 3 to peek");

	int res;
	while(1){
		puts("enter response");
		scanf("%d",&res);

		switch(res){
			case 1:
				puts("enter value");
				scanf("%d",&res);
				push(res);
				break;
			case 2:
				printf("%d",pop());
				break;
			case 3:
				peek();
				break;
		}
	}
}
