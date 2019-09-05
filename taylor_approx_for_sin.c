#include <stdio.h>
#include <math.h>
#define PI 3.14

long long int fact(int n){
	if(n == 0 || n == 1)
		return 1;
	return n*fact(n-1);
}
int main(){
	printf("Enter the value of n : ");
	int n;
	long double deg,x = 0, sum = 0;
	scanf("%d",&n);
	printf("Enter degrees : ");
	scanf("%Lf", &deg);

	//double deg_cp = deg;

	x = deg * (PI / 180.0);
	
	while(x > 2*PI)	{
		x -= 2*PI;
	}

	printf("x is %Lf\n",x);
	if(n > 0){
		for(int i = 0, j = 0; i < n; i++){
			int powr = 2*i + 1;
			sum += (j%2 == 0) ? (long double)pow(x,powr)/fact(powr) : -((long double)pow(x,powr)/fact(powr));
			j++;
		}
	}
	printf("The sine value sin(%Lf) = %Lf\n",deg, sum);
	printf("The sine value using built-in sin(%Lf) = %Lf\n",deg,(long double)sin(x));
}
