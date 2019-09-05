# include <stdio.h>
# include <string.h>

void fun(char *in){
	char val[5];
	strcpy(val, in);
	printf("%s", val);
}

int main(int argc, char **argv){
	fun(argv[1]);
}

