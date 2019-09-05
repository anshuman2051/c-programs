# include <stdio.h>
# include <stdlib.h>

typedef struct node *node_ptr;
struct node{
    int data;
    node_ptr next;    
};

node_ptr start = NULL;

void insert_node(int data){
    node_ptr temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = NULL;

    if(start == NULL)
        start = temp;
    else{
        node_ptr x = start;
        while( x -> next != NULL){
            x = x-> next;
        }
        x -> next = temp;
    }
}

void print(void){
    node_ptr temp = start;
    if(start == NULL)
        puts("the list is empty");
    else{
        while( temp != NULL){
            printf("%3d", temp -> data);
            temp = temp -> next;
        }
    }

}

void delete(){
    node_ptr temp = start;

    if(start == NULL) 
        puts("the list is empty");
    else{
        start = start -> next;
        free( temp);
    } 
}
int main(){
    insert_node(35);
    insert_node(45);
    delete();
    print();
}