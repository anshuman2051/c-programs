# include <stdio.h>
# include <ctype.h>
# include <string.h>
#include <stdlib.h>

char * to_capital(char *in)
 {
        char * out = malloc(sizeof(char)*strlen(in));
        int len = strlen(in);
	while(*in){
		*out  = toupper(*in);
		in++;
		out++;
	}
	return out-len;
}
int main()
{
	//can`t over write an already allocated space
	char *in = malloc(sizeof(char)*20);
	//in = "anshuman";
	puts("enter to capitalize");
	// gets(in);
	//fgets(in,20,stdin); 
	scanf("%s",in); 
	printf("so you entered : %s",in); 
	in = to_capital(in);
	puts(" ");
	puts(in);
}
