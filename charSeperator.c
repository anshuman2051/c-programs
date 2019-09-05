# include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char* in = malloc(sizeof(char)*20);
	in = "anshuman";
	puts("enter the text you want to see vertically");
	//scanf("%s",in);
	puts(in);

	while(*in!=' '){
		putchar(*in);
		putchar('\n');
		in++;
	}
	free(in);

	return 0;
}
