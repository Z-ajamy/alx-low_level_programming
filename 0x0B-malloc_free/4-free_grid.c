#include "main.h"

/**
 * free_grid - Frees a 2D grid previously allocated by alloc_grid.
 * @grid: Pointer to the 2D array.
 * @height: Number of rows in the grid.
 */
void free_grid(int **grid, int height)
{
    int i;

    /* Check if grid is NULL or height is invalid */
    if (!grid || height <= 0)
        return;

    /* Free each row */
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    /* Free the main pointer */
    free(grid);
}
