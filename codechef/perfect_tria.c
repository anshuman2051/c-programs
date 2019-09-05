/* this code checks that on given an upper bound for c weather a right angled triangle is
* perfect triangle and not a superperfect triangle
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float ar( int a, int b, int c){
    float s = (a + b + c) /2.0;
    
    return sqrt( s* (s-a)* (s-b)* (s-c));
}

int gcd(int a, int b){
    if( a % b == 0) return b;
    return gcd(b, a % b);
}
int is_premetive(int a,int b,int c){
    int a1,a2;
    if(a > b) a1 =gcd(a,b);
    else a1 = gcd(b,a);
    a2 = gcd(c, b);
    if( a1 == a2 == 1)
        return 1;
    else return 0;
}
int check_perfect(int n){
    int count = 0;
    for(int i = 5; i*i <= n; i++){
        int c = i * i ;
        for(int a = 1; a < c; a++){
            for(int b = c-a+1; b < c; b++)
                if(is_premetive(a, b, c)){
                    float area = ar(a, b, c);
                    if( (int)area % 6 != 0 && (int)area % 28 != 0){
                        count ++;
                    }
                }
        }
    }
    return count;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int q;
    scanf("%d", &q);
    
    int *n = malloc(sizeof(int)*q);
    for(int i = 0; i < q; i++){
        scanf("%d", &n[i]);
        n[i] = check_perfect(n[i]);
    }
    
    for(int i = 0; i < q; i++){
       printf("%d\n", n[i]);
    }
    return 0;
}
