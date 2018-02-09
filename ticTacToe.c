# include <stdio.h>
void display(char a[][3])
	{char arr[5][5];
	for(int i = 0,k=0,l=0;i<5;i+=2)
	   {
	for(int j = 0; j<5; j+=2)
		      {arr[i][j] = input[l][k]; 
			k++;}
	l++;	
	    }

         
	}

int main(int len, char *input[][3])
{
char location[3][3];
display(location);
printf("_|_|_\n");
printf("_|_|_\n");
printf(" | | \n");
printf("player 1-x and player 2-o symbols\n");
printf();
}

