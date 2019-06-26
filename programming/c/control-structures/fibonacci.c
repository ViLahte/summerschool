#include <stdio.h>

int main(int argc, char *argv[])
{
    int f0, f1, f2;

    // initialize variables and write the while loop
    // Remember to update all variables within the loop
	int n = 0;
	f0=0;
	f1=1;
	f2=0;
	while (f2<100){
			f2=f0+f1;
			f0=f1;
			f1=f2;
			if (f2<100) printf("%i\n",f2);
	}
    return 0;
}
