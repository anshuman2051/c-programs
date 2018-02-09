#include <stdio.h>
	int main()
	{
	double p,r,t;
	printf("please enter principle rate and time in the given order:");
	scanf("%lf%lf%lf",&p,&r,&t);
	double si = p*r*t/100;
	printf("your interest is %.2lf and the amount is:%.2lf\n",si,si+p);}
