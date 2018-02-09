#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
	{
	int a=0,c=0;
	char b;
	printf("starting to make a calculator app");
	scanf("%d%c%d",&a,&b,&c);
if(b=='+')
	{printf("%d",a+c);}
if(b=='-')
        {printf("%d",a-c);}
if(b=='*')
        {printf("%d",a*c);}
if(b=='/')
        {printf("%d",a/c);}
if(b=='%')
        {printf("%d",a%c);}
if(b=='^')
        {printf("%lf",pow(a,c));}




	return 0;
}

