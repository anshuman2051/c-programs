#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int min = 5526;
void compare(int n){
    if(abs(n) < abs(min))
        min = n;
    else if(abs(n) == abs(min))
        if(n > 0)
            min = n;
    }
int main()
{
    int n; // the number of temperatures to analyse
    puts("enter the no of temp you want to enter:");
    scanf("%d", &n);
    puts("pls enter the values");
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        scanf("%d", &t);
        
        compare(t);
    }
    

    // Write an action using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    if(n == 0)
        printf("%d\n",0);
    else
        printf("%d\n",min);

    return 0;
}
