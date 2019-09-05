#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAX_SIZE 60

char *stack;
int tos = -1;
int stack_size;
void push(char ch){
	if(tos < stack_size-1)
		stack[++tos] = ch;
	else
		puts("stack overflow");
}

char pop(){
	if(tos < 0)
		puts("stack underflow");
	else{
		char val = stack[tos--];
		return val;
	}
}

int get_priority(char c){
	if(c == '^')
		return 1;
	else if(c == '*' || c == '/' || c =='%')
		return 2;
	else if(c == '+' || c == '-')
		return 3;
}

void eval_preorder(char *exp, int len){
	int i =0;
	while(i++ < len){
		int val = exp[i-1];
		if(val >= 'a' && val <= 'z' || val >= 'A' && val <= 'Z')
			printf("%c",val);
		else if(val == '+' || val == '-' || val == '*' || val == '/' || val == '%'){
			if(tos == -1){
				push(val);
			}
			else {
				if(get_priority(stack[tos]) <= get_priority(val)){
					printf("%c",pop());
					push(val);
				}
				else
					push(val);
			}
		}
	}
	while(tos != -1)
		printf("%c",pop());
}
int main(){
	char *exp = malloc(sizeof(char)* MAX_SIZE);
	puts("enter the expression");
	scanf("%s",exp);
	stack_size = strlen(exp);
	stack = malloc(sizeof(char)*stack_size);

	eval_preorder(&exp[0], stack_size);
}
