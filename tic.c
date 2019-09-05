#include <stdio.h>
# include <stdlib.h>
int main(int argc ,char* argv[])
{
	FILE *fp;
	char ch;
	if(argc!=2)
	{
		printf("you forgot to enter file name\n");
		exit(1);
		}
	if((fp=fopen(argv[1],"w"))==NULL)
	{
		printf("can`t open file");
		exit(1);
		}
	do{
		ch =getchar();
		fprintf(fp,"%c",ch);
	}
	while(ch != '$');
	
	rewind(fp);
	do{
		fscanf(fp,"%c",stdout);
	}while(!feof(fp));

	fclose(fp);

	return 0;


}
