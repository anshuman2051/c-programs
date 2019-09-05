#include <stdio.h>

int main(){
	int num;

	do{
		printf("enter a positive no:");
		scanf("%d", &num);	
	}
	while(num < 0);

	int factorial;
	for (int i = 0; i <= num ; i++)
		factorial = factorial * 1;

	printf("%d! = %d \n", num, factorial);
	return 0;
}
