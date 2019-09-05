#include <stdio.h>
int main(){
	printf("Enter row and col sizes : ");
	int r, c;
	scanf("%d %d",&r, &c);
	int mat1[r][c];
	printf("Enter %d elements : ", r*c);
	for(int i = 0; i < r; i++){
		for(int j = 0; j <c;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	//printf("Hello");
	int p,q;
	printf("Enter r and col sizes ; ");
	scanf("%d %d", &p, &q);
	int mat2[p][q];

	printf("Enter %d elements : ", p*q);
	for(int i = 0; i < p; i++){
		for(int j = 0; j <q;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	
}
