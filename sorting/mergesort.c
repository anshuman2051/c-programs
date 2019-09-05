//not working
#include <stdio.h>

void merge(int arr[], int lb,int mid , int ub){
	int i = lb, j = mid+1, k = lb;
	int c[5];
	int n = 0;
	while(i <= mid && j <= ub && n < 5){
		if(arr[i] < arr[j]){
			c[n++] = arr[i++];
		}
		else{
			c[n++] = arr[j ++];
		}
	}
	while(i<= mid){
		c[n++] = arr[i++];
	}
	while(j<= ub){
		c[n++] = arr[j++];
	}

	for(int i = 0; i < 5; i++){
		arr[i] = c[i];
	}
}
void sort(int arr[], int lb, int ub){
	if(lb <ub){
		int mid = (ub - lb) / 2;
		sort(arr, lb, mid);
		sort(arr, mid + 1, ub);
		merge(arr, lb,mid ,ub);
	}
}

int main(){
	int arr[] = { 2 , 1, 19, 3, 13};
	sort(arr, 0,4);	

	/*for(int i = 0; i < 5 ; i++){
		printf("%d", arr[i]);
	}
	*/
}
