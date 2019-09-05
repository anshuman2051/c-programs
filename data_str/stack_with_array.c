# include<stdio.h>
# include<stdlib.h>

int tos = -1;

// declaring functions
void push_data( int data[], int size );
void pop_data(int data[] );
void print_stack( int data[]);


int main(){
	//asking user for inputs
	int stack_size ;
	puts("enter the stack size");
	scanf("%d", &stack_size);
	int *data = malloc(sizeof(int)*stack_size);
	puts("stack successfully created\n");

	int user_input;
	puts("enter the command:\n \
			1. print the stack\n \
			2. push a value\n \
			3. pop the stack\n \
			0. exit the prog\n");
	while(1){
		printf(">");
		scanf("%d", &user_input);

		//checking for values
		switch(user_input){
			case 1:
			print_stack(data);	
			break;

			case 2:
			push_data(data, stack_size );
			break;

			case 3:
			pop_data(data);
			break;

			case 0:
			puts("good bi....;)");
			exit(0);

			default:
			puts("please enter a correct input");
			continue;
			
		}
	}
}


void print_stack( int data[]){
	puts("printing the stack");
	for(int i = 0; i<= tos; i++){
		printf("%d\n", data[i]);
	}
}


void push_data( int data[], int size ){
	if(tos != size){
		int value;
		puts("enter the value to enter in the stack >");
		scanf("%d", &value);
		tos++;
		data[tos] = value;
		puts("successfully pushed value");
	}
	else{
		puts("sorry the stack is full");
		return;
	}
}


void pop_data(int data[] ){
	if(tos != -1){
		data[tos] = EOF;
		tos--;
		puts("popped one value");
	}
	else{
	puts("sorry the stack is already empty");
	return;
	}
}
