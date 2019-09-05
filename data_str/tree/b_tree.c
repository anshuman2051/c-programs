#include <stdio.h>
#include <stdlib.h>

#ifndef _Tree_H

struct Treenode;
typedef struct Treenode *Position;
typedef struct Treenode *SearchTree;

SearchTree MakeEmpty(SearchTree T);
SearchTree insert(int data, SearchTree T);
Position find_element(int data, SearchTree T);
void print(SearchTree T);

#endif

struct Treenode{
	int data;
	SearchTree left;
	SearchTree right;
};
int main(){
	SearchTree T = NULL;
	T = insert(5, T);
	T = insert(7, T);
	T = insert(9, T);
	print(T);
	MakeEmpty(T);

}

SearchTree MakeEmpty(SearchTree T){
	if(T != NULL){
		MakeEmpty(T -> left);
		MakeEmpty(T -> right);
		free(T);
	}
	return NULL;
}

Position find_element(int element, SearchTree T){
	if(T != NULL){
		if(element < T->data)
			find_element(element, T->left);
		else if(element > T->data)
			find_element(element, T->right);
		else
			return T;
	}
	else{
		puts("node is null, can't find;");
		return NULL;
	}
}

SearchTree insert(int data, SearchTree T){

	if(T == NULL){
		T= malloc(sizeof(struct Treenode));
		T-> data = data;
		T-> left = T-> right = NULL;
	}
	else{
		if(data < T -> data)
			T->left = insert(data, T->left);
		else if(data > T->data)
			T->right = insert(data, T->right);
	}
	return T;
}

void print(SearchTree T){
	if(T != NULL){
		printf("%-3d",T->data);
		print(T->left);
		print(T->right);
	}
	else{
		return;
	}
}
