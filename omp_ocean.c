#include <omp.h>

void ocean (int **grid, int xdim, int ydim, int timesteps)
{
    /********************* the red-black algortihm (start)************************/
    /*
    In odd timesteps, calculate indeces with - and in even timesteps, calculate indeces with * 
    See the example of 6x6 matrix, A represents the corner elements. 
        A A A A A A
        A - * - * A
        A * - * - A
        A - * - * A
        A * - * - A
        A A A A A A 
    */

    // PUT YOUR CODE HERE
    int x,y,z;
   for(z=timesteps;z>=0;z--){	
    #pragma omp parallel for \
    shared(grid,xdim,ydim) \
    private(x,y) \
    firstprivate(z) \
    schedule(dynamic) 
    	for (x=1;x<(xdim-1);x++){
    		
    	    for (y=1;y<(ydim-1);y++) {
    	    
    	    	if(((z%2)==0)&&((x+y)%2==0)) {
    	    		grid[x][y]=(grid[x][y]+grid[x-1][y]+grid[x][y-1]+grid[x+1][y]+grid[x][y+1])/5;
    	    	}
    	    	else if((z%2)&&(x+y)%2){
    	    		grid[x][y]=(grid[x][y]+grid[x-1][y]+grid[x][y-1]+grid[x+1][y]+grid[x][y+1])/5;

    	    	}

    	    }



    	}
   }

       /////////////////////// the red-black algortihm (end) ///////////////////////////
}
