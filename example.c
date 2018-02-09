
# include <stdio.h>

void sort(int in[],int len);
int main()
	{
	int input;
	printf("enter how many no. you want to enter?");
	scanf("%d",&input);
	int arr[input];
	printf("enter all the numbers:");
	for(int i = 0; i<input; i++)	
		{scanf("%d",&arr[i]);
		}
	printf("the range of the given numbers is->%d",arr[input-1]-arr[0]);
	return 0;
}
void sort(int in[] , int len)
	{int temp =0;
	for(int i =0; i< len-1; i++)
		{for(int j =0 ;j <len-1; j++)
			{if(in[j]>in[j+1])
				{temp = in[j];
				in[j] = in[j+1];
				in[j+1]= temp;}
			}
		}	

}
