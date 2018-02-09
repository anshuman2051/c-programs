# include <stdio.h>
#include <string.h>
	int main(){
	char* in;
	puts("enter the text you want to hear");
	scanf("%s",in);
	puts(in);
	while(*in!=''){
	putchar(in);
	in++;
	}
	return 0;
	}
