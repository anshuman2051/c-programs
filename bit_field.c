//used when we know exactly how many bits a var will take
//like in date 1-31 means 5 bits 
//

#include <stdio.h>

struct date{
	unsigned int day:5;
	unsigned int month:4;
	unsigned int year;
};

int main(){
	printf("size of date is %d bytes \n", sizeof(struct date));
	struct date d = { 15, 06, 1999};
	printf("date is %d month %d year %d", d.day, d.month, d.year);
}
