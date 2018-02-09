# include <stdio.h>
# include<stdlib.h>
# include<string.h>

int main()
	{
	FILE *fp;
	fp = fopen("ansh.txt","wb");
	if(fp ==NULL)
	{printf("can`t open file");
	exit(1);}
	
	struct class{
	char name[50];
	int sno;
	char sub[50];
	}a;
	
	printf("enter the values enter * to end");
	do
	{scanf("%s,%d,%s",a.name,&a.sno,a.sub);
	fprintf(fp,"%s,%d,%s",a.name,a.sno,a.sub);}
	while(a.name != "end");
	fclose(fp);
	
	return 0;
	}	

