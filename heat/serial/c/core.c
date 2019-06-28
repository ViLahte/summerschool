/* Main solver routines for heat equation solver */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "heat.h"

/* Update the temperature values using five-point stencil */
void evolve(field *curr, field *prev, double a, double dt)
{
    int i, j;
    double dx2, dy2;

    /* Determine the temperature field at next time step
     * As we have fixed boundary conditions, the outermost gridpoints
     * are not updated. */
    dx2 = prev->dx * prev->dx;
    dy2 = prev->dy * prev->dy;

    /* TODO: Add update loops for computing the new field values
             of 'curr' using field 'prev' */

//#error Add update loops

	int nx = prev->nx;
	int ny = prev->ny;

	double **array = prev->data;
	double laplace;

	for(j=1;j<ny-1;j++){
		for(i=1;i<nx-1;i++){
			laplace =  
			(array[i-1][j] - 2.0*array[i][j] + array[i+1][j] ) / dx2 +
			(array[i][j-1] - 2.0*array[i][j] + array[i][j+1] ) / dy2;

			curr->data[i][j] = array[i][j] + dt*a*laplace;
		}
	}
}
