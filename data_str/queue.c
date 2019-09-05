# include <stdio.h>
# include <stdlib.h>

struct queue{
    int front, rear;
    int * data;
    int capacity;
};
typedef struct queue * queue;

int is_empty( queue q){
    return q -> front == q -> rear == -1;
}

queue create(int capacity){
    queue q = malloc(sizeof(struct queue));
    q->front = q->rear = -1;
    q->capacity = capacity;
    q->data = malloc( sizeof(int) * capacity );
    return q;
}

void enqueue( queue q, int data){
    if( is_empty( q )){
        q -> front = q -> rear = 0;
        q -> data[q-> rear] = data;
    }
    else if( (q->capacity + q -> rear + 1 - q -> front) % q -> capacity == 0 ){
        puts("queue overflow");
    }
    else{
        q -> rear = (q->rear +1)% q-> capacity;
        q -> data[ q -> rear ] = data;
    }
}

int dequeue( queue q){

}

void print( queue q){
    if( !is_empty(q) ){
        for(int i = 0; i < q -> capacity; i++){
            printf("%2d", q -> data[ ( q -> front +i) % q -> capacity ]);
        }
    }

}


int main(){
    queue q = create(5);
    enqueue(q,3);
    enqueue(q,3);
    enqueue(q,3);
    enqueue(q,3);
    enqueue(q,7);
    print(q);
}
