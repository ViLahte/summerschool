#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

	i = 123;
	printf("%d",i);
    // write the control structure as described in the exercise
    // and run the code with different values for i
	if (i<0){
		printf("negative");
	}
	else if (i==0){
		printf("zero");
	} else if (i>100) {
		printf("larger than 100");
	}
	printf("\n");
    return 0;
}
