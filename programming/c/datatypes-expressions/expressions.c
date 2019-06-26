#include <stdio.h>

int main(int argc, char *argv[])
{
    // declare integers, floats, and doubles
	int a = 3;
	float b = 3.14;
	char c = 'c';
	char d = (char)42;
	int e = 123;

	int* f;
	f=&e;


	printf("%c%c\n",c,d);
	printf("%d%d\n",e,*f);
    // evaluate expressions, e.g. c = a + 2.5 * b
    // and print out results. Try to combine integers, floats
    // and doubles and investigate what happens in type conversions

    return 0;
}
