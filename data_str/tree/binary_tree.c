/*
 * insertion in b tree using
 * recursion
 */

# include <stdio.h>
# include <stdlib.h>

typedef struct node * node;

struct node{
	int data;
	node right,left;
};

node start = NULL;

void pre_order(node n){
	if(n){
		printf("%-3d", n-> data);
		pre_order(n->left);
		pre_order(n->right);
	}
}

void post_order(node n){
	if(n){
		post_order(n->left);
		post_order(n->right);
		printf("%-3d",n->data);
	}
}

void in_order(node n){
	if(n){
		in_order(n->left);
		printf("%-3d",n->data);
		in_order(n->right);
	}
}

//check this function
node insert(node n, node in){
	int d = in->data;
	if(n == NULL){
		n = in;
		return n;
	}
	else if(n->data > d){
		n->left = insert(n->left, in);
	}
	else if(n->data < d)
		n->right = insert(n->right, in);
	//not checking for duplicates
}

node search(node n, int val){
	if(n == NULL){
		return NULL;
	}
	else if(n->data < val)
		return search(n->right, val);
	else if(n->data > val)
		return search(n->left, val);
	else if(n->data == val)
		return n;
}
node find_max(node root){
	if(root->right != NULL){
		root = find_max(root->right);
	}
	else
		return root;
}

node delete(node root, int data){
	node temp;
	if(root == NULL){
		puts("empty list can't delete");
	}
	else if(data < root->data ){
		root->left = delete(root->left, data);
	}
	else if(data > root->data ){
		root->right= delete(root->right, data);
	}
	else{
		//value found
		if(root->left && root->right){
			//both child present
			temp = find_max(root->left);
			printf("the max node is %d\n",temp->data);
			root->data = temp->data;
			root->left = delete(root->left, temp->data);
		}
		else{
			//one or none child present
			temp = root;
			if(root->left == NULL){
				root = root->right;
			}
			if(root->right == NULL){
				root = root->left;
			}
			free(temp);
		}
	}
	return root;
}

node create(){
	int data;
	printf("insert the data \n>");
	scanf("%d",&data);

	node temp = malloc(sizeof(struct node));
	temp -> data = data;
	temp -> left = temp -> right = NULL;
	return temp;
}

void menu(){
	puts("enter 1 to create b-t");
	puts("enter 2 to preorder traverse b-t");
	puts("enter 3 to postorder traverse b-t");
	puts("enter 4 to inorder traverse b-t");
	puts("enter 5 to delete a node");
	puts("enter 0 to search for a value");
	puts("enter 9 to exit b-t");
	int res;

	while(1){
		printf("enter your response\n>");
		scanf("%d",&res);
		node val;

		switch(res){
			case 0:
				printf("insert a value to search\n >");
				scanf("%d",&res);
				val = search(start, res); 
				if(val)
					printf("you have found your value %d\n",val->data);
				else
					puts("value not found");
				break;
			case 1:
				start = insert(start, create());
				break;
			case 2:
				pre_order(start);
				break;
			case 3:
				post_order(start);
				break;
			case 4:
				in_order(start);
				break;
			case 5:
				puts("enter value to delete");
				scanf("%d",&res);
				delete(start, res);
				break;
			case 9:
				puts("bye");
				exit(1);
			default:
				puts("wrong response");
		}
	}
}

int main(){
	 menu();
}
