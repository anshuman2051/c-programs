#include <stdio.h>
#include <limits.h>
#define CHAR 56

int main(){
	fprintf(stdout,"hello in fprintf");
	puts("");
	puts("Hello world in puts");
	printf("Hello world in printf");
	printf("%d",INT_MAX);

	enum a{an= 5 ,bn, cn};
	printf("\n%d", bn);
	char a = CHAR;
	printf("\n%c",a);
}
