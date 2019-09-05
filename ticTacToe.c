# include <stdio.h>
# include <stdlib.h>
# include <math.h>
#include<time.h>

char data[3][3] = {
			 {'7','8','9'},
			 {'4','5','6'},
			 {'1','2','3'}
		  };
void draw(){
	printf("%c|%c|%c\n",data[0][0], data[0][1], data[0][2]);
	printf("-----\n");
	printf("%c|%c|%c\n",data[1][0], data[1][1], data[1][2]);
	printf("-----\n");
	printf("%c|%c|%c\n",data[2][0], data[2][1], data[2][2]);

}
int isEmpty(int pos){
	char val = data[2 - pos/3][pos % 3];
	return !(val == 'X' || val == 'O');
}
void update(int p_num){
	int res;
	char symbl;
	if(p_num == 1){
		symbl = 'X';
	}
	else symbl = 'O';

	INPUT:puts("enter the grid num you want to enter");		//flag INPUT
	scanf("%d", &res);
	res--; 	//changing res to start from 0
	if(res <= 8 && res >= 0 && isEmpty(res)){
		data[2 - res/3][res % 3] = symbl;
	}
	else{
		puts("please enter a valid place");
		goto INPUT;
	}
}

int isFull(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(data[i][j] != 'X' && data[i][j] != 'O')
				return 0;
		}
	}
	return 1;
}

int getResult(int p_num){									//takes arg player num who has placed his move previously
	if(data[0][0] == data[1][1] && data[1][1]  == data[2][2]	||
	   data[0][0] == data[0][1] && data[0][1] == data[0][2]  ||
	   data[1][0] == data[1][1] && data[1][1] == data[1][2]  ||
	   data[2][0] == data[2][1] && data[2][1] == data[2][2]  ||
	   data[0][0] == data[1][0] && data[1][0] == data[2][0]  ||
	   data[0][1] == data[1][1] && data[1][1] == data[2][1]  ||
	   data[0][2] == data[1][2] && data[1][2] == data[2][2]  ||
	   data[0][2] == data[1][1] && data[1][1] == data[2][0]
	){
		if(p_num == 1) return 1;
		else  return 2;
	}
	return 0;
}
int main()
{
	draw();
	srand(time(NULL));
	int result;
	int player_no = rand()%2 + 1;
	while(!isFull() && !(result = getResult(player_no%2 + 1))){					//runs till table is not full and result don't comes
		printf("its player %d\'s turn\n",player_no);
		update(player_no);
		player_no = (player_no ) % 2 + 1;
		draw();
	}
	if(isFull()){
		puts("match tied");
	}
	else
		printf("congrats !! \nplayer %d won" , result);
}

