#include <stdio.h>

int count_primes(int range);
int check_prime(int num);
int main(){
	printf("%d",count_primes(30031));
	return 0;
}


int count_primes(int range){
	int count = 0;
	for(int i = 1; i < range; i++){
		if( check_prime(i)) count++;
	}
	return count;
}


int check_prime(int num){
	for(int i = 1; i < num; i++){
		if(i == 1)continue;

		if(num % i == 0)return 0;	
		} 
	return 1;
}
