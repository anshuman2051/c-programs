# include<stdio.h>
# include<stdlib.h>
# include "../../stack.h"
# define LEN 10

typedef struct node * node;
stack st; // declaring stack;

struct node{
	int data;
	node left, right;
};
node start = NULL;


node create(int data){
	node temp = malloc(sizeof(struct node));
	temp->left = temp->right = NULL;
	temp->data = data;
	return temp;
}

void insert (node n){
	if(!start)
		start = n;
	else{
		node temp = start;
		while(temp != NULL){
			if(temp->data < n->data)
				temp = temp->right;
			else if(temp->data > n->data)
				temp = temp->left;
			else{
				puts("sorry duplicate found");
				break;
			}
		}
		if(temp == NULL){
			temp = n;
		}
	}
}

void inorder_traverse(){
	 	
}
int main(){
	st.len = LEN;
	st.data = malloc(sizeof(st) * LEN);
	st.tos = -1;
	insert(create(5));
}
