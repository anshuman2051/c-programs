#include<stdio.h>
#include<stdlib.h>

typedef struct entry *entry;
struct entry{
	int n,k;
	int *val;
};

int calc(entry t){
	int count = 0;
	for(int i = 0; i < t->n; i++){
		if(t->val[i] <= t->val[k])
			count++;
	}
	return count;
}

int main(){
	int struct_len;
	scanf("%d",&struct_len);

	entry e = malloc(sizeof(struct entry)*struct_len);
	entry temp = e;
	for(int i = 0; i<struct_len; i++){
		scanf("%d%d",&temp->n,&temp->k);
		temp->val = malloc(sizeof(int)*temp->n);
		
		for(int i = 0; i < temp->n; i++){
			scanf("%d",&temp->val[i]);
		}
		printf("%d\n",calc(temp));
		temp++;
	}
}
