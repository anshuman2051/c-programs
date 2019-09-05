#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[20];
    char sen[20];
    
    scanf("%c",&ch);
    fgets(sen, 20, stdin);
    scanf("%s",s);
    
    printf("%c \n%s \n%s \n", ch, s, sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
