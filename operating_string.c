#include<stdio.h>
#include<string.h>

int main(){
	char  *a = "anshuman";
		printf("%s length is: %lu \n", a, strlen(a));

	while(*a ){
		a++;
		printf("%s length is: %lu \n", a, strlen(a));
	}
}
