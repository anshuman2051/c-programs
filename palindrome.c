// program for palindrome no
# include<stdio.h>
#include <string.h>
int main(){
puts(" enter a no, to check fr palindrome:-\n");
int a;
scanf("%d",&a );

/*input done now working of code*/

int rev = 0;
for(int i =a; i>=1;i /= 10){
rev += rev*10+a%10;
}
printf("%d,%s",a,rev == a);
if(rev == a){
puts("congrats, you just entered a palindrome no.");}
else puts("sorry , this no. is not apalindrome.");

return 0;} 

