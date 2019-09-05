#include <stdio.h>
#define dprint(expr) printf(#expr "=%d\n",expr)
void main(){
	int x = 7, y = 3, z = 6;
	dprint(x/y);
}
