#include <stdio.h>
#include <stdlib.h>
#include "pngwriter.h"

#define NX 258
#define NY 258

#define DX 0.01
#define DY 0.01

int main(void)
{
    int i, j, error_code;
    double array[NX][NY];
    double laplacian[NX][NY];

    // First initalize the inner values to zero
    for (i = 1; i < NX - 1; i++) {
        for (j = 1; j < NY - 1; j++) {
            array[i][j] = 0.0;
        }
    }

    // Initial conditions for left and right
    for (i = 0; i < NX; i++) {
        array[i][0] = 20.0;
        array[i][NY - 1] = 70.0;
    }
    // and top and bottom boundaries
    for (j = 0; j < NY; j++) {
        array[0][j] = 85.0;
        array[NX - 1][j] = 5.0;
    }

    // Zero out the outer boundary of laplacian
    for (i = 0; i < NX; i++) {
        laplacian[i][0] = laplacian[i][NY - 1] = 0.0;
    }
    for (j = 0; j < NY; j++) {
        laplacian[0][j] = laplacian[NX - 1][j] = 0.0;
    }

	
    // Evaluate the Laplacian
    // *INDENT-OFF*
//#error Add the missing part
	
	for(j=1;j<NY-1;j++){
			for(i=1;i<NX-1;i++){
				laplacian[i][j] =
 (array[i-1][j] - 2.0*array[i][j] + array[i+1][j] ) / 1.0*DX*DX +
 (array[i][j+1] - 2.0*array[i][j] + array[i][j+1] ) / 1.0*DY*DY; 
			}
	}
    // *INDENT-ON*
	//for(i=40;i<100;i++){
	//		for(j=50;j<100;j++){
	//		laplacian[i][j]=88.0;
	//		}
	//}
    // Call the png writer routine
    error_code = save_png((double *) laplacian, NX, NY, "datastructures_functions_heat-a_b.png", 'c');

    if (error_code == 0) {
        printf("Wrote the output file datastructures_functions_heat-a_b.png\n");
    } else {
        printf("Error while writing output file datastructures_functions_heat-a_b.png\n");
    }

    return 0;
}
