# include<stdio.h>
# include<stdlib.h>

struct stack{
	int tos, capacity; 
	int *data;
};

typedef struct stack st;

st * create(int capacity){
	st * temp = malloc(sizeof(st));
	temp -> capacity = capacity;
	temp -> tos = -1;
	temp -> data = malloc(sizeof(int)*capacity);
	return temp;
} 

void push(st * s ,int val){
	if(s -> tos != s -> capacity-1){
		s->data[(s ->tos)++] = val;
	}
	else
		puts("sorry stack is full.");
} 

int pop(st * s){
	if( s -> tos != -1){
		return s -> data[(s -> tos)--];
	}
	else{
		puts("stack already empty");
		return -1;
	}
		
}

void print(st * s){
	if(s -> tos != -1){
		int t = 0;
		while( t < s -> tos){
			printf("%-3d",s -> data[t++]);
		}
	}
	else
		puts("can't print stack");
}

int main(){
	st * s = create(5) ;

	pop(s);
	for(int i = 0; i < 6; i++){
		push(s, i*i);
	}
	print(s);

}
