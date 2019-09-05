#include<stdio.h>
#include<stdlib.h>


int main(){
	int len = 0,no_of_rotation = 0;
	puts("enter len of array and no of rotation");
	scanf("%d%d",&len,&no_of_rotation);

	int *arr = malloc(sizeof(int)*len);
	printf("enter %d values ",len);
	for(int i = 0; i < len; i++){
		scanf("%d",&arr[i]);
	}

	int *arr_out = malloc(sizeof(int)*len);
	for(int i = 0,j = no_of_rotation; i < len; i++,j = (j+1)%len){
		arr_out[i] = arr[j];
		printf("%3d",arr_out[i]);
	}
}

