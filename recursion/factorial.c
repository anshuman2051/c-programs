# include <stdio.h>

int fact(int n){
    if(n == 1)
        return 1;
    return n * fact(n-1);

}

int main(){
    puts("pls enter the no of which you want factorial");
    int num;
    scanf("%d",&num);
    printf("the factorial of the num %d is %d",num, fact(num));
}