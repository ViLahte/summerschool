#include <stdio.h>
#include <stdlib.h>

#define NX 258
#define NY 258

int main(void)
{
    int i, j;
    float array[NX][NY];
    // Add here the definition for array with name 'array'
    // of size NX times NY (258x258)
//#error Define the array

    // Initialize first the zeros
//#error Initialize the zeros for interior
	for(i=0;i<NX;i++){
			for(j=0;j<NY;j++){
					array[i][j] = 0.0;
			}
	}
    // Initial conditions for left and right
//#error add boundary conditions for left and right
	for(i=0;i<NX;i++){
		array[i][NY-1]=85.0;
		array[i][0]=5.0;
	}
	for(j=0;j<NY;j++){
		array[NX-1][j]=70.0;
		array[0][j]=20.0;
	}
    // and top and bottom boundaries
//#error add boundary conditions for top and bottom
	//printf("%.2f\n",array[NX-1][NY-1]);
    return 0;
}
