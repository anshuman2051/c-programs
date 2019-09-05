#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int max_int = 0;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){
            if((j&i > max_int) && (j&i < k)){
		    max_int = j&i;
	   	    printf("max_int for %d & %d :%d\n",i,j,max_int); 
	    }
        }
    }
    printf("%d\n", max_int);
    
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

