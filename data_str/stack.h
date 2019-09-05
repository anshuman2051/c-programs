#include <stdio.h>
#include <stdlib.h>

typedef struct stack stack;
struct stack{
	int *data;
	int len;
	int tos;
};

int pop(int * data, int *tos){
	if(*tos > -1){
		int val = data[(*tos)--];
		return val;
	}
}

void push(int val, int *tos, int len, int * data){
	if(*tos < len -1)
		data[++(*tos)] = val;
}

void peek(int * data, int tos){
	for(int i = 0; i <= tos; i++)
		printf("%-3d",data[i]);
}
