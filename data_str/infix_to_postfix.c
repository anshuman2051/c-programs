# include <stdio.h> 
# include <stdlib.h>

struct stack{
    char* data;
    int len;
    int tos;
};
typedef struct stack stack;
stack main_stack, op_stack;

void push( stack *st, char data);
char pop( stack * st );
int is_lower(char , char);
void convert( char * input);

int main(){
    int len;
    char * input;
    puts("enter the max len of expr:");
    scanf("%d", &len);
    input = malloc(sizeof(char)*len);
    main_stack.data = malloc(sizeof(stack)*len);
    op_stack.data =  malloc(sizeof(stack)*len);
    main_stack.tos = op_stack.tos = -1;
    main_stack.len = op_stack.len = len;


    puts("please enter the expr:");
    // fgets(input , 20, stdin);
    // chckk why its not working
    scanf("%s", input);
    convert( input);
    printf("%s",main_stack.data);
}


void convert( char * input){
    // logic for converting from in to post... 
    while( *input != '\0' ){
        if( *input == '+' ||*input == '-' || *input == '*' || *input == '/' ){
            if(!is_lower( *(input - 1), *input) && *(op_stack.data)){
                push(&main_stack, pop(&op_stack));
            }
            else{
                push(&main_stack,*input);
            }
        }
        else{
            push(&main_stack, *input);
        }
        input ++;
    }
    // emptying the op_stack after input is empty
    while( op_stack.tos<= 0){
        push(&main_stack, pop(&op_stack));
    }
}


int is_lower(char prev_op, char curr_op){
    if(prev_op == '*' || prev_op == '/')
        return 0;
    else{
        if(curr_op == '*' || curr_op == '/')
            return 1;
        else 
            return 0;
        }
}


char pop( stack *st){
    if( st-> tos != -1)
        return st->data[ st-> tos--] ;
    else
        puts("stack is empty cant pop");
}


void push( stack *st, char data){
    if( st->tos != st->len){
        (st -> tos)++;
        st-> data[st -> tos] = data;
    }
}