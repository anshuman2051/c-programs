#include <stdio.h>

int toh(int n, char a, char b, char c){
    if(n >= 1){
        toh(n-1, a, c, b);
        printf("from %c to %c\n",a,c);
        toh(n-1,b, a, c);
    }
}

int main(){
    puts("pls enter the no of disk in tower");
    int num;
    scanf("%d",&num);
    printf("the total no of steps required  is \n");
    toh(num, 'a', 'b', 'c');
}
