#include <stdio.h>

int min(int arr[], int strt, int len){
	int min = 200, loc = -1;
	for(int i = strt; i < len ; i++){
		if(arr[i] < min){
			min = arr[i];
			loc = i;
		} 
	}
	return loc;
}

int main(){
	int arr[] = {6, 1, 9 , 16, 2, 0};
	int loc, temp;

	for(int i = 0; i < 6-1; i++){
		loc = min(arr,i , 6);
		temp = arr[loc];
		arr[loc] = arr[i];
		arr[i] = temp;
	}

	puts("the sorted value is:");
	for(int i = 0; i< 6; i++){
		printf(" %d", arr[i]);
	}
}
