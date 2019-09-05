# include<stdio.h>
# include<stdlib.h>

typedef struct node{
	int data;
	struct node * next, * prev;
}* node_ptr;
node_ptr start = NULL;

node_ptr create(int data){
	node_ptr temp = malloc(sizeof(struct node));
	temp -> data = data;
	temp -> next = NULL;
	temp -> prev = NULL;
	return temp;
}

void append(node_ptr node){
	if(start == NULL){
		start = node;
	}
	else{
		node_ptr t = start;
		while(t -> next != NULL){
			t  = t->next;
		}
		t -> next = node;
		node -> prev = t;
	}
}

void print(void){
	if(start == NULL)
		printf("your list is empty");
	else{
		node_ptr t = start;
		while(t != NULL){
			printf("%-3d",t->data);
			t = t->next;
		}
	}

}
int main(int argc, char* argv){
	if(argc > 1){
		int i = 0;
		while(argc > i++ ){
			printf("%d \n", i);
			printf("value: %c\n",*(argv+i));
			//node_ptr ptr = create(atoi(argv[i]));
			//append(ptr);
		}
	}

	print();
}


