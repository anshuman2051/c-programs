#include <stdio.h>
void main() {
	enum month {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
	enum month birthday = JUL;
	printf("Birthday Month = %d", birthday);
}
