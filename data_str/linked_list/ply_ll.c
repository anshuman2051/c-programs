#include <stdio.h>
#include <stdlib.h>

typedef struct node * node;
struct node{
	int coeff;
	int power;
	node next;
};

node start = NULL;

void insert(node n){
	if(start != NULL)
	{
		node temp = start;
		while(temp -> next != NULL)
			temp = temp->next;
		temp->next = n;
	}
	else
		start = n;
}

node create(){
	int i;
	puts("enter the length");
	scanf("%d",&i);

	while(i--){
		node temp = malloc(sizeof(struct node));
		puts("enter the coefficient:");
		scanf("%d",&temp->coeff);
		puts("enter the power:");
		scanf("%d",&temp->power);
		temp->next = NULL;

		insert(temp);
	}
}

void print(){
	if(start){
		node temp = start;
		while(temp){
			printf("+%dX^%d\t",temp->coeff,temp->power);
			temp = temp->next;
		}
	}
}

int main(){
	puts("enter 1 for creting 2 print");
	int res;
	while(1){
		printf(">\n");
		scanf("%d",&res);
		switch(res){
			case 1:
				create();
				break;
			case 2:
				print();
				break;
		}
		
	}
}
