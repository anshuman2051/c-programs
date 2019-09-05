#include<stdio.h>
#include<stdlib.h>

typedef struct node * node;
struct node{
	int data;
	node left,right;
};
node start = NULL;

node create(int val){
	node temp = malloc(sizeof(struct node));
	temp->data = val;
	temp->left = temp->right = NULL;
	return temp;
}

void insert(node n){
	if(start == NULL)
		start = n;
	else{
		node temp = start;
		while(temp != NULL){
			if(n->data< temp->data ){
				if(temp->left == NULL)
					temp->left = n;
				temp = temp->left;
			}
			if(n->data> temp->data){
				if(temp->right== NULL)
					temp->right = n;
				temp = temp->right;
			}
			else
				break;
		}
	}
}

void traverse(){
	if(start == NULL)
		puts("tree empty");
	else{
		node temp = start;
		while(temp != NULL){
			printf("%-3d",temp->data);
			if(temp->left != NULL)
				temp = temp->left;
			else if(temp->right!= NULL)
				temp = temp->right;
			else
				break;
		}

	}
}

void menu(){
	puts("enter 1 to create a branch 2 to print");
	int res,val;
	while(1){
		puts("response>");
		scanf("%d",&res);
		switch(res){
			case 1:
				puts("enter value");
				scanf("%d",&val);
				insert(create(val));
				break;
			case 2:
				traverse();
				break;
			default:
				puts("wrong val");
		}
	}
}
int main(){
	menu();
}
