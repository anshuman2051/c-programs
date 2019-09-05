# include <stdio.h>
# include <stdlib.h>

typedef struct stack* stack;
struct stack{
	int tos;
	int len;
	int *data;
};

stack create_stack(int len){
	stack temp = malloc(sizeof(struct stack));
	temp -> data = malloc(sizeof(int)*len);
	temp -> len = len;
	temp -> tos = -1;
	return temp;
}

void peek(stack n){
	if(n->tos == -1)
		puts("stack empty");
	else{
		int temp_tos = n->tos;
		while(temp_tos != -1){
			printf("%-3d",n-> data[n->tos - temp_tos]);
			temp_tos --;
		}
	}
}

void push(stack n, int data){
	if(n->tos >= n->len-1)
		puts("stack overflow");
	else{
		n->tos++;
		n->data[n->tos] = data;
	}
}

int pop(stack n){
	if(n->tos == -1){
		puts("stack empty");
		return -1;
	}
	else{
		return n->data[(n->tos)--];
	}

}

int main(){
	stack s = create_stack(5);
	push(s,5);
	push(s,1);
	push(s,7);
	push(s,1);
	push(s,1);
	peek(s);
}
