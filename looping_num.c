#include <stdio.h>

void horizontal_print(int n , int k){
	int switch_var = 0;
	for(int i= n, j = 1; j<= 2*n -1;){
		printf("%d",i);
		if(j == n)
			switch_var = 1;
		if(!(j-1 >= k && j < (2*n -1)-k)){
			if(switch_var)i++;
			else i--;
		}
			j++;
	}
	puts("");
}

int main(){
	int n ;
	printf("enter the length of number\n>");
	scanf("%d",&n);
	int switch_var = 0;
	for(int i = 0,k = 0; i < 2*n -1 ;){
		horizontal_print(n, k);
		//printf("%d",k);
		i++;
		if(switch_var)k--;
		else k++;
		if(i == n-1) switch_var = 1;
	}
}
