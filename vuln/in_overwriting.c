#include <stdio.h>

int n;
void check(char *s){
	printf(s);
	if(n){
		puts("changed the val successfully");
	}
}

int main(int argc, char **argv){
	check(argv[1]);
	
}

