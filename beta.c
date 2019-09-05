#include <stdio.h>

int comb(int a,int b);
int fact(int a);

int main()
    {
        int t =0,win =0;
        scanf("%d",&t);

        int arr[t][2];
        for(int i =0; i<t;++i)
            {
                scanf("%d%d",&arr[i][0],&arr[i][1]);
            }

        for(int i =0; i<t;++i)
            {
                win = comb(arr[i][0], 4);
                if((win*win)!=arr[i][1])
                {
                    arr[i][0]=-1;
                }
            }

    }


int comb(int a,int b)
{
    return fact(a)/(fact(b-a)*fact(b));
}

int fact(int a)
{
    int out =1;
    while(a--)
        {
            out *= a+1;
        }
    return out;
}
