#include <stdio.h>
#include <stdlib.h>

int * reverse(int count, int * arr, int * arr2_count){
	int b[count];
	for(int i = 0; i< count; i++){
		b[i] = arr[i]+4;
	}
	*arr2_count = count;
	return b;

}
int main(){
	int len = 5;
	int *arr = malloc(sizeof(int)*len);
	for(int i = 0; i< 5; i++){
		arr[i] = i;
	}

	int arr2_count;
	arr = reverse(len, arr, &arr2_count);
	for(int i = 0; i< 5; i++){
		printf("%d",arr[i]);
	}
}
