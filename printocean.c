#include <stdio.h>

void printocean (int **grid, int xdim, int ydim)
{
    int x,y;
    	for (y=0;y<ydim;y++){
    		
    	    for (x=0;x<xdim;x++) {
    	    	printf("%d  ",grid[x][y]);
    	    	}
            printf("\n");		
    	}



    /////////////////////// the red-black algortihm (end) ///////////////////////////
}
