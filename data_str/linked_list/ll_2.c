# include <stdio.h>
# include <stdlib.h>

typedef struct node{
	int data;
	struct node * next;
}* node_ptr;
node_ptr node = NULL;

node_ptr create(int data){
	node_ptr temp = malloc(sizeof(struct node));
	temp -> next = NULL;
	temp -> data = data;
	return temp;
}

void append(node_ptr n){
	node_ptr temp = node;
	if(node == NULL){
		node = n;
	}
	else{
		while(temp-> next != NULL)
			temp= temp-> next;
		temp-> next = n;
	}
}

void print(){
	if(node != NULL){
		node_ptr n = node;
		while(n != NULL){
			printf("%-4d",n->data);
			n = n -> next;
		}
	}
	else
		puts("node is empty");
}
void insert_front(node_ptr n){
	node_ptr temp = node;
	if(node == NULL)
		node = n;
	else{
		n -> next = node;
		node= n;
	}
}

void insert_at_n(node_ptr n , int pos){
	int count = 0;
	node_ptr temp = node;
	while(count ++ < pos){
		temp = temp -> next;
		if(temp == NULL){
			puts("length is too big");
			return;
		}
	}
	n -> next = temp -> next;
	temp = n;
}
int main(){
	for(int i = 0; i< 5;i++){
		node_ptr temp = create(i+5);
		append(temp);
	}
	node_ptr temp = create(150);
	insert_front(temp);
	insert_at_n(temp, 3);
	print();
}


