#include<stdio.h>
#include<stdlib.h>

int main(){
	puts("enter no of elements and no of left rotations");
	int n,d;
	scanf("%d%d",&n,&d);
	puts("enter the numbers");
	int *a = malloc(sizeof(int)*n);
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
	}
	puts("output after left rotation is");
	for(int i = 0;i < n; i++){
		printf("%d ",a[(i+d)%n]);
	}
}
