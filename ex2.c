/* answer to  g*/
#include <stdio.h>
int main()
{double i; int pos = 0,neg = 0,zero = 0;
printf("enter the numbers.\n enter 32768 to finish\n");
scanf("%lf",&i);
while(i!= 32768)
{
if(i>0)pos++;
if(i==0)zero++;
if(i<0)neg++;
scanf("%lf",&i);
}

printf("you have entered %d positive, %d negative and %d zeroes",pos,neg,zero);
}
