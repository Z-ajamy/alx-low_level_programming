#include "main.h"


void free_grid(int **grid, int height)
{
    int i;
    if (height == 0 || !grid)
        return;
    
    for ( i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
    
}
