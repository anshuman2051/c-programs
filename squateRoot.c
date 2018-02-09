# include <stdio.h>
int main()
	{
		double a,b,c;
		printf("please enter the quadr. eq in the order a,b,c");
		scanf("%lf%lf%lf",&a,&b,&c);
		double d = b*b - 4*a*c;
		if(d<0)
		{
			puts("this eq. has imaginary roots");
		}
		else if(d == 0)
		{
			printf("this eq has single root and that is\n %.2lf",-b/(2*a) );
		}
		else
		{
			printf("this eq. has twodistinct roots and those are:\n%.2lf and %.2lf",(-b+d)/(2*a),(b+d)/(2*a));
		}

	}