#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	if(argc == 2){
		printf("checking License: %s\n",argv[1]);
		if(strcmp(argv[1], "AAAA-Z10N-42-OK") == 0){
			printf("Access Granted!\n");
		}
		else{
			printf("Wrong!\n");
		}
	}
	else{
		printf("usage: <key>\n");
	}
	return 0;
}


