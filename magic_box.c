// this code prints the given numbers in box shape

#include <stdio.h>

void print_square( int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j<n; j++){
			printf("%d",i);
			}
		puts(" ");
		}
}

int main(){
	int n;
	puts("enter a number to see magic:");	
	scanf("%d",&n);

	print_square(n);
}
