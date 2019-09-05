#include <stdio.h>

int main(){
	int arr[] = {2,16,3,9, 1, 8};

	int temp, j;
	for(int i = 1; i < 6; i++){
		temp = arr[i];
		for(j = i - 1; j >= 0 && temp < arr[j] ; j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = temp;
	}

	puts("the sorted value is:");
	for(int i = 0; i< 6; i++){
		printf(" %d", arr[i]);
	}
}
