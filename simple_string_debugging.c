# include<stdio.h>
# include<stdlib.h>

int main(){
	char *a = "anshuman";  //modifying gives undefined behavior
	char b[] ="anshuman";
	printf("%s",b);
	printf("\t%s",a);
	puts("");
	printf("%c",b[0]);
	printf("%c",a[0]);
	a[0] ="v";
	//printf("\t%s",a);
}


