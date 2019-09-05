#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[20];
    char sen[20];
    char temp;
    
    scanf("%c",&ch);
    scanf("%s",s);
    temp = getchar();
    
    scanf("%[^\n]%*c", sen);
    
    putchar(ch);
    puts(" " );
    puts(s);
    puts(sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
