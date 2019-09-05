#include <stdio.h>

int get_fibo_sum(int in){
	if (in <= 1)
	       	return 1;
	else
	       	return get_fibo_sum(in -1) + get_fibo_sum(in -2);
}

int main(){
	int len;
	puts("enter the num to find the fibonacci sum:");
	scanf("%d",&len);
	printf("%d",get_fibo_sum(len));
}
