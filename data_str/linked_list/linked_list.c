#include <stdio.h>
#include <stdlib.h>

typedef struct node * listptr;
struct node{ 
	int data;
	listptr pos;
};

void add_data( int data );
void print_data( void);
listptr base = 0;

int main(){
	add_data(4);
	add_data(4);
	add_data(4);
	add_data(4);
	print_data();
}


void add_data( int data ){
	listptr new_node = malloc(sizeof(struct node));
	new_node -> data = data;
	new_node -> pos = 0;
	listptr temp = base;

	if(base == 0)
		base = new_node;
	else{
		while(temp -> pos != 0)
			temp = temp->pos;
		temp -> pos = new_node;
	}
	return;
}


void print_data( void ){
	listptr temp = base;
	if(temp == 0)
		puts("list is empty");
	else
	 while(temp -> pos != 0){
		 printf("%3d",temp-> data);
		 temp = temp -> pos;
	 }
	puts("");
}
