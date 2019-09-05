# include<stdio.h>
# include<stdlib.h>
# include "../data_str/stack.h"
#define LEN 10

int main(){
	stack st;
	st.len  = LEN;
	st.data = malloc(sizeof(stack) * LEN);
	st.tos = -1;

	push(5, &st.tos, st.len, st.data);
	push(6, &st.tos, st.len, st.data);
	push(7, &st.tos, st.len, st.data);
	printf("value popped is %d\n",pop(st.data, &st.tos));
	peek(st.data, st.tos);
}
