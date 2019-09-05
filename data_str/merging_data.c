#include <stdio.h>
#include <stdlib.h>
#include "../sort.h"
#include <limits.h>

int make_unique( int data[], int len);              // removes duplicate values using realloc
int* init_array( int * data , int * len);           // initializes the values
void print_data( int data[], int len);              // for printing data

int main(){
    int *data1, *data2, *merged_data;
    int data1_len, data2_len;

    data1 = init_array( data1, &data1_len);
    data2 = init_array( data2, &data2_len);

    int merged_data_len = data1_len + data2_len;
    merged_data = malloc( sizeof(int)*merged_data_len);

    //assigning the data of above 2 arrays to single array to merge
    for(int i = 0; i < data1_len ; i++){
        merged_data[i] = data1[i];
    }
    for(int i = 0; i < data2_len ; i++){
        merged_data[i + data1_len] = data2[i];
    }
    sort( merged_data, merged_data_len);

    //removing duplicates
    int new_len = make_unique(merged_data, merged_data_len);
    puts("printing the  merged data");
    print_data( merged_data, new_len);

    free(data1);
    free(data2);
    free(merged_data);
}


int make_unique(int data[], int len){
    int count = 0;
    for(int i = 0; i < len -1; i++){
        if(data[i]==data[i+1]){
            data[i] = INT_MAX;                  //giving the repeating value the max int size to sort it out
            count++;
            }
    }
    sort(data, len);
    data = realloc(data, len -count);
    return len - count;
}

int* init_array( int * data , int * len){
    puts("please enter the length of the array:");
    scanf("%d", len);

    data = malloc( sizeof(int)*(*len) );
    puts("enter the values:");
    for( int i =  0; i < *len ; i++){
        scanf("%d", &data[i]);
    }
    return data;
}

void print_data( int data[], int len){
    for( int i = 0; i < len ; i++){
        printf("%3d",data[i]);
    }
    puts("");
}
