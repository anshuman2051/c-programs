# include <stdio.h>
# include "sort.h"
int main(){
puts("please enter some integers to sort:\n");
int a[10];
for(int i=0;i<10;++i)
	{
	scanf("%d",a[i]);}
sort(a,10);
for(int i =0;i<10;++i){
printf("%2d",a[i]);
if(i%5==0)puts("");}}
