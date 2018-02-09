# include <stdio.h>
	void spaces(int no);
	int main(){
	for(int i = 0;i < 10; ++i){
		for(int j=-1;j < i; ++j){
		printf("%c",'#');
		}
		puts(" ");
	}
	}
	
	void spaces(int no){
	while(no--){
	puts(" ");}}
