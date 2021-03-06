#include <stdio.h>
#include <stdlib.h>

#include "hwtimer.h"

/* Implement this function in serial_ocean and omp_ocean */
extern void ocean (int** grid, int xdim, int ydim, int timesteps, int chunk);

void printGrid(int** grid, int xdim, int ydim);

int main(int argc, char* argv[])
{
    int xdim,ydim,timesteps,r,p;
    int** grid;
    int i,j,t;
    int chunk;

    hwtimer_t timer;
    initTimer(&timer);
    
    /********************Get the arguments correctly (start) **************************/
    /* 
    Three input Arguments to the program
    1. X Dimension of the grid
    2. Y dimension of the grid
    3. number of timesteps the algorithm is to be performed
    */
    
    if (argc!=7) {
        printf("The Arguments you entered are wrong.\n");
        printf("./serial_ocean <x-dim> <y-dim> <timesteps> <value_matrix> <print>\n");
        return EXIT_FAILURE;
    } else {
        xdim = atoi(argv[1]);
        ydim = atoi(argv[2]);
        timesteps = atoi(argv[3]);
	r = atoi(argv[4]);
	p = atoi(argv[5]);
	chunk = atoi(argv[6]);
    }
	if(p!=0 && p!=1) {
        	printf("use only binary values for print\n");
		return EXIT_FAILURE;

	}
    ///////////////////////Get the arguments correctly (end) //////////////////////////


    /*********************create the grid as required (start) ************************/
    /*
    The grid needs to be allocated as per the input arguments and randomly initialized.
    Remember during allocation that we want to gaurentee a contiguous block, hence the
    nasty pointer math.

    To test your code for correctness please comment this section of random initialization.
    */
    grid = (int**) malloc(ydim*sizeof(int*));
    int *temp = (int*) malloc(xdim*ydim*sizeof(int));
    for (i=0; i<ydim; i++) {
        grid[i] = &temp[i*xdim];
    }
    for (i=0; i<ydim; i++) {
        for (j=0; j<xdim; j++) {
	    if(r!=0) {
	    	if((i+j)%2){ 
            		grid[i][j] = r;//rand()%100;
	    	} else 
	    	{	grid[i][j] = 0;
	    	}
	   } else {grid[i][j] = rand()%1000; }
        }
    }
    ///////////////////////create the grid as required (end) //////////////////////////
    if(p!=0) {  
    printf("Ocean matrix at the start\n");
    printocean(grid,xdim,ydim); 
    }
    startTimer(&timer); // Start the time measurment here before the algorithm starts

    ocean(grid, xdim, ydim, timesteps, chunk);

    stopTimer(&timer); // End the time measuremnt here since the algorithm ended
    if(p!=0) {
    printf("Ocean matrix at the end\n");
    printocean(grid,xdim,ydim);
    }

    //Do the time calcuclation
    printf("Total Execution time: %lld ns\n", getTimerNs(&timer));

    // Free the memory we allocated for grid
    free(temp);
    free(grid);

    return EXIT_SUCCESS;
}
