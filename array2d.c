/* checks working of 2d array
 * using pointers
 */
#include <stdio.h>

int main(){
	int a[5][5];
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			a[i][j] = i + 2*j;
		}
	}

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("%-2d",a[i][j]);
		}
		puts("");
	}

	char *name[5] = { "anshuman", "sam", "akash", "rakesh"};

	for(int i =0 ; i< 4; i++){
		printf("\n%s",name[i] );
	}
}

