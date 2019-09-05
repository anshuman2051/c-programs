
#include <stdlib.h>

// will not define stdio.h if already defined by some library
#ifndef stdio_h
    #include <stdio.h>
#endif

int main(){
    int **N;
    N = malloc(sizeof(int *) * 5);

    for(int i = 0; i < 5; i++){
        *(N + i) = malloc(sizeof(int) * 5);    //creating a 5 *5 2d array
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            *(*(N + j) + i) = i + j;
            printf("%d", *(*(N + j) + i));
        }
        puts("");
    }
    
}
