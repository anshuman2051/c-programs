# include <stdio.h>
# include <stdlib.h>
# include <time.h>

typedef struct node * node;

struct node {
	int data;
	node prev, next;
};
node start = NULL;
node create(){
	node temp = malloc(sizeof(struct node));
	int data;
	printf("enter data\n>");
	scanf("%d",&data);

	temp -> data = data;
	temp -> prev = temp -> next = NULL;
}

void insert(node n){
	if(start == NULL){
		start = n;
	}
	else{
		node temp = start;
		while(temp -> next != NULL)
			temp = temp->next;
		temp -> next = n;
		n->prev = temp;
	}
}

void insert_front(node n){
	if(start == NULL){
		start = n;
	}
	else{
		n->next = start->next;
		start->prev = n;
		start = n;
	}
}

void print(){
	if(start == NULL)
		puts("list is empty");
	else{
		node temp = start;
		while(temp != NULL){
			printf("%-3d",temp->data);
			temp = temp->next;
		}
		puts("");
	}
}

void free_list(){
	if(start == NULL)
		free(start);
	else{
		node temp = start,t2;
		while(temp -> next != NULL){
			t2 = temp;
			temp = temp->next;
			free(t2);
		}
	}
}

node create_random(){
	int data = rand()%200;
	printf("your random value is:%d\n",data);
	node temp = malloc(sizeof(struct node));
	temp -> data = data;
	temp -> prev = temp -> next = NULL;
	return temp;
}
void menu(){
	puts("enter 1 to create a node");
	puts("enter 2 to create a node with a random no");
	puts("enter 3 to print");
	puts("enter 4 to insert at front");
	puts("enter 9 to free");
	puts("enter 0 to exit");

	int res;	
	while(1){
		printf("enter your response \n>");
		scanf("%d",&res);

		switch(res){
			case 1:
				insert(create());
				break;
			case 2:
				insert(create_random())	;
				break;
			case 3:
				print();
				break;
			case 4:
				insert_front(create());
			case 9:
				free_list();
				break;
			case 0:
				puts("exiting");
				exit(1);
			default:
				puts("you entered a wrong response");
		}
	}
}

int main(){
	printf("the time is %ld",time(NULL));
	srand(time(NULL));
	menu();
}

