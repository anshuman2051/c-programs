//this program shows how forking works in linux os
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    printf("the process id is : %d",getpid());
    printf("before forking\n");
    int p = fork();
    if(p ==0){
        printf("in child\n");
        printf("the child id is %d \n",getpid());
        printf("the parent id is %d\n ",getppid());
        puts("executing program");
        execl("/bin/ls","-la","/etc",NULL);
    }
    else{
        printf("in parent\n");
        printf("the child's pid is %d \n",p);
        printf("the parent pid is %d \n",getpid());
    }
    return 0;
}
