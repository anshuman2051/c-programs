#include <stdio.h>
int main(){
	float a = 0.7;		//implicit typecasting as 0.7 is considered as double by default
	if(0.7 > a){
		printf("Hi");
	}
	else {
		printf("hello");
	}
}

