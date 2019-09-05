//correction required
//
# include <stdio.h>
# include <stdlib.h>

typedef struct node *node;

struct node{
	int data;
	node left, right;
};
node root = NULL;

node create(void){
	int data;
	puts("enter value");
	scanf("%d",&data);
	node temp = malloc(sizeof(node));
	temp->data = data;
	temp->left = temp->right = NULL;

	return temp;
}

void insert(node n){
	if(root == NULL)
		root = n;
	else{
		node t2,temp = root;
		while(temp != NULL){
			if(n->data < temp->data){
				t2 = temp;
				temp = temp->left;
			}
			else if(n->data > temp->data)
				t2 = temp;
				temp = temp->right;
		}
		if(n->data < t2->data )
			t2->left = n;
		else
			t2->right = n;
	}
}

void print(node n){
	if(n){
		print(n->left);
		printf("%d\n",n->data);
		print(n->right);
	}
}

int main(){
	puts("1 for insertion 2 print");
	int res;
	while(1){
		printf("\n>");
		scanf("%d",&res);
		switch(res){
			case 1:
				insert(create());
				break;
			case 2:
				print(root);
				break;
		}
	}
}
