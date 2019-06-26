#include <stdio.h>

int main(void){
	int *p;
	int a = 5;
	p = &a;
	printf("hello world %03d\n",*p);
	return 0;
}
