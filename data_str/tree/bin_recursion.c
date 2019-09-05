# include<stdio.h>
# include<stdlib.h>

typedef struct node * node;

struct node{
	int data;
	node left, right;
};

struct stack
node start = NULL;

node insert(node base, node n){
	if(base == NULL)
		base = n;
	else{
		if(n->data < base->data)
			base->left = insert(base->left, n);
		if(n->data > base->data)
			base->right = insert(base->right, n);
		return base;
	}
}

node create(int data){
	node temp = malloc(sizeof(struct node));
	temp -> data = data;
	temp -> left = temp -> right = NULL;
	return temp;
}

int main(){
	node n= create(5);
	start = insert(start,n);
	start = insert(start,create(1));
	printf("%d\n %d",start->data,start->left->data);
}
