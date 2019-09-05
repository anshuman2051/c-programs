#include <stdio.h>
#include <stdlib.h>

typedef struct node * node;

struct node{
	int data;
	node next;
};

node start = NULL;

node create(int data){
	node temp = malloc(sizeof(struct node));
	temp -> data = data;
	temp -> next = NULL;
	return temp;
}

void print(){
	if(start == NULL)
		puts("can't print list is empty");
	else{
		node temp = start; while(temp != NULL){
			printf("%3d", temp -> data);
			temp = temp -> next;
		}
	}
	puts("");
}

void append(node n){
	if(start == NULL)
		start = n;
	else{
	node temp = start;
	while(temp -> next != NULL)
		temp = temp -> next;
	temp -> next = n;
	}
}

void insert_at_n(node n, int index){
	if(start == NULL)
		if(index == 1)
			start = n;
		else
			puts("invalid index");
	else{
		node prev,temp = start;
		int count = 1;
		while(temp->next != NULL){
			if(count == index)
				break;
			count++;
			prev = temp;
			temp = temp->next;
		}
		if(index == count){
			prev -> next = n;
			n->next =temp;

		}
		else{
			puts("invalid index");
		}
	}

}
void delete_list(){
	if(start == NULL)
		free(start);
	else{
		node temp = start;
		free(start);

		while(temp != NULL){
			node t2 = temp;
			temp = temp -> next;
			free(t2);
		}
	}
}

void delete_at_front();
void delete_at_end();

void delete_at_n(int index){
	if(start == NULL)
		puts("list is empty");
	else if(index == 1)
		delete_at_front();
	else{
		node prev,temp = start;
		int count = 1;
		while(temp -> next != NULL){
			if(count == index)
				break;
			prev = temp;
			temp = temp -> next;
			count++;
		}

		if(count == index){
			temp = temp -> next;
			free(prev->next);
			prev->next = temp;
		}
		else{
			puts("the index doesn't exist");
		}

	}
	
}
void delete_at_val(int val){
	if(start == NULL)
		puts("list is empty");
	else if(start->data == val){
		delete_at_front();
	}
	else{
		node prev=NULL, temp = start;
		while(temp-> next != NULL){
			if(temp -> data == val)
				break;
			prev = temp;
			temp = temp -> next;
		}

		if(temp -> data == val){
			if(temp -> next == NULL)
				delete_at_end();
			else{
				temp = temp -> next;
				free(prev->next);
				prev -> next = temp;
			}
		}
		else{
			puts("can't delete value not found");
		}
	}
}

void delete_at_front(){
	if(start == NULL)
		puts("list is empty");
	else{
		node temp = start;
		start = start -> next;
		free(temp);
	}
}

void insert_at_start(node n){
	if(start == NULL)
		start = n;
	else{
		node temp = start;
		n ->next = temp;
		start = n;
	}
}

void delete_at_end(){
	if(start == NULL)
		puts("list is empty");
	else{
		node prev;
		node temp = start;
		while(temp-> next != NULL){
			prev = temp;
			temp = temp -> next;
		}
		free(temp);
		prev -> next = NULL;
	}
}

void menu(){
	puts("press 1 to create a list");
	puts("press 2 to delete  list");
	puts("press 3 to print list");
	puts("press 9 to exit");
	int res,res2;
	while(1){
		puts("enter your response:");
		scanf("%d",&res);

	}
}

int main(){
	node data;
	for(int i = 0; i < 5; i++){
		data = create(i+2);
		append(data);
	}
	print();
	//delete_at_val(6);
	delete_at_n(1);
	print();
	//print();
	//delete_at_end();
	//print();
	//delete_at_front();
	//print();
	//delete_at_n(3);
	//print();
	//delete_at_val(6);
	//print();
	//insert_at_start(create(7));
	//insert_at_n(create(11),3);
	//puts("");
	//print();
	//delete_list();
	//menu();
}
