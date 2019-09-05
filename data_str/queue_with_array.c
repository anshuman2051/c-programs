#include <stdio.h>
#include <stdlib.h>

int front, rear = -1;

void enqueue(int queue[], int capacity, int val);
void dequeue(int queue[], int capacity);
void print_queue(int queue[], int capacity);

int main(){
    //creation of queue
    int capacity = 5;
    int * queue = malloc(sizeof(int)*5);
    for(int i = 0; i<capacity - 3; i++)
        queue[i]  = i+1;

    // enqueue( queue, 5, 3);
    // print_queue( queue, capacity);
}

void enqueue(int queue[], int capacity, int val){
    //check if queue is full
    if(front == -1){
        front++;
        rear++;
        queue[rear] = val;
    }
    else if(front == rear + 1){
        //it is full
        puts("queue is full");
        return;
    }
    else{
        rear++;
        queue[rear] = val;
    }
}


void print_queue(int queue[], int capacity){
    for(int i = front ; i <= rear; i++){
        printf("%3d", queue[i]);
    }
}
