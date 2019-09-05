#include <stdio.h>

int main(){
	struct point{
		int x;
		int y;	
	};	
	typedef struct point point;
	point b = {4,7}; 
	printf("%d",b.y);
}
