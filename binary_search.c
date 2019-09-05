# include <stdio.h>
# include <stdlib.h>
#include <time.h>
# include "sort.h" 

int binary_search(int arr[], int val, int len){
	int min = 0, max = len-1;
        int mid = (len - 1) / 2;	

	while(11){
		mid = (max + min) / 2;
		if( arr[mid] == val){
			return mid;
			break;
		}
		else if(arr[mid] < val){
			min = mid;
		}
		else if(arr[mid] > val){
			max = mid;
		}

		//code if search goes false
		if(mid == 0 || mid == len - 2 ){
			puts("search hit bottom.");exit(0);
		}

	}
}


int main(){
	//declaring variables
	int arr[10];
	int value_to_search;

	//initializing the array with random no.
	srand(time(NULL));
	for(int i = 0; i < 10; i++){
		arr[i] = rand() % 10;
	}
	sort(arr, 10);
	
	//printing the array
	for(int i = 0; i < 10; i++){
		printf("%2d",arr[i]);
	}

	printf("\nplease enter the value to search from one to 10\n >");
	scanf("%d", &value_to_search);

	int index = binary_search(arr, value_to_search, 10);

	if(index != -1)
		printf("value matched at index %d", index);
	else
		printf("sorry, vale not found");
}
