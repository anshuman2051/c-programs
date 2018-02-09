# include<stdio.h>
int main(){
  char str[] ="this is my new string";
  char* const ptr;
  *ptr=str;
  char *b="hi";
  printf("%s \n%s",str,b);
}
