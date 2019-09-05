# include <stdio.h>

int fib(int n){
    if(n == 1 || n == 2)
        return 1;
    return fib(n-1) + fib(n-2);
}

int main(){
    puts("pls enter the no of which you want fibonacci");
    int num;
    scanf("%d",&num);
    printf("the fibonacci no. at n =  %d is %d",num, fib(num));
}
