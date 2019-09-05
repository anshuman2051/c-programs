//takes custom input to convert a data to celsius



#include<stdio.h>

//takes only one value
double find_celsius(double input){
	return 5*(input - 32)/9;
}

//takes an array
void find_celsius_2(double *input, int len){
	for(int i = 0; i<len; i++){
		input[i] = 5*(input[i] -32)/9;		
	}
	return;
}
int main(){
	double out = 5/9;
	printf("hello world  %f df", out);
	puts("\nnow printing the celsius value of given farenheit:");

	int n;
	double data[20];
	//taking array input
	puts("enter the length of array");
	scanf("%d",&n);
	for( int i = 0 ; i< n; i++){
		scanf("%lf",&data[i]);
	}
	puts("entered successfully");

	//calling function
	printf("%10s %10s\n","farenheit","celsius");
	for( int i = 0; i < n; i++){
		printf("%10.2f %10.2f\n",data[i],find_celsius(data[i]));
	}

	//calling second function
	find_celsius_2(data, n);
	for( int i = 0; i < n; i++){
		printf("%f\n",data[i]);
	}

}
