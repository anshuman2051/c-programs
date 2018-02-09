# include <stdio.h>
double* calculateCharges(double* charges,double *x);
int main(){
	puts("pls enter the no of hrs you parked,");
	double input[3],x[3];
	double hours= 0;	
	for(int i=1; i < 4; ++i)
	{
	printf("for car %d:-",i);
	scanf("%lf",&input[i-1]);
	}
	double* val=calculateCharges(input, x);
	double totalCharge=0;
	double *temp=&val;
	for(int i=0;i<3;++i)	
	{
	totalCharge +=*temp++;}
	printf("%10s%10s%10s\n","Car","Hours","Charge");
	for(int i =0; i<3; i++)
	{
	printf("%10d%10.2lf%10.2lf\n",i+1,input[i],*val++);}


}
	

double* calculateCharges(double* charges,double* x){

	for(int i=0; i < 3; ++i){
	if(charges[i]<=3)x[i]=2;
	else x[i]=2+0.5*(charges[i] - 3);
	}
	return x;
}
