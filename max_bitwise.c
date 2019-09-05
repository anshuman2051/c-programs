#include<stdio.h>

//this program takes two num n and k and
//finds a1 | a2 which is less than k

int max_or(int n, int k){
	int max = 0;
	int temp;
	for(int i = 2; i <= n; i++){
		for(int j = 1; j<i; j++){
			if((temp = i|j) > max && temp < k )
				max =temp ;
		}
	}	
	return max;
}
int main(){
	int n,k;
	printf("enter two num:");
	scanf("%d%d",&n,&k);

	printf("%d",max_or(n,k));
}

