//checking the use of setvbuf(FILE * stream, char * buffer, int mode, size_t size)
//

#include <stdio.h>
#include <string.h>

int main(){
	char buf[1024];

	memset(buff , '\0', sizeof(buff));

	fprintf(stdout, "going to set full buffering on \n");
	setvbuf(stdout, buff, _IOFBF, 1024);

	fprintf(stdout, "This is tutorialspoint.com\n");
	fprintf(stdout, "this output will go into buff\n");
	fflush(stdout);

	fprintf(stdout, "and this will appear when program \n");
	fprintf(stdout, "will come after sleeping 5 seconds \n");

	sleep(5);

	return(0);
}

