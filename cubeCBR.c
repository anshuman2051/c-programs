# include<stdio.h>
void cube(int *a);
int main()
	{int a =7;
		cube(&a);
		printf("thi cube is:\t%d",a);
	}
void cube(int *a)
	{int b= *a;
		*a=b*b*b;

	}