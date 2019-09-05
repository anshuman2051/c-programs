#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    if(argc == 2){
        puts("checking key");
        int sum = 0;

        for(int i = 0; i < strlen(argv[1]); i++){
            sum += (int)argv[1][i];
        }

        if(sum == 97)
               puts("Access granted");
        else
            puts("wrong key");
    }
    else 
        printf("usage : <key>\n");
}
