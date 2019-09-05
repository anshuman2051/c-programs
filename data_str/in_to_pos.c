# include<stdio.h>
# include<ctype.h>
# include<stdlib.h>

char *stack;
int tos = -1;

void push(char c){
    stack[++tos] = c;
}

char pop(){
    if(tos == -1)
        return -1;
    else
        return stack[tos--];
}

int precedence(char c){
    if( c == '/' || c == '*'){
        return 2;
    }
    else if( c == '+' || c == '-')
        return 1;
    else if(c == '(')
        return 0;
}


int main(){
    int len;
    char x;
    puts("enter the length of exp");
    scanf("%d",&len);
    stack = malloc(sizeof(char)*len);

    puts("enter the expr");
    scanf("%s",stack);

    char * temp = stack;
    while( *temp!= '\0'){
        if(isalnum(*temp))
            printf("%c",*temp);
        else if( *temp == '('){
            push(*temp);
        }
        else if( *temp == ')'){
            while((x = pop())!= '(')
                printf("%c",x);
        }
        else{
            while(precedence(stack[tos]) > precedence(*temp))
                printf("%c",pop());
            push(*temp);
        }
        temp++;
    }
    while(tos != -1){
        printf("%c",pop());
    }
}
