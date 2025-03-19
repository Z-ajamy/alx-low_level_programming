#include "main.h"

/**
 * alloc_grid - Allocates a 2D array of integers initialized to 0.
 * @width: Number of columns.
 * @height: Number of rows.
 *
 * Return: Pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
    int **ptr;
    int i, j;

    /* Validate input dimensions */
    if (width <= 0 || height <= 0)
        return NULL;

    /* Allocate memory for row pointers */
    ptr = malloc(sizeof(int *) * height);
    if (!ptr)
        return NULL;

    /* Allocate memory for each row */
    for (i = 0; i < height; i++)
    {
        ptr[i] = malloc(sizeof(int) * width);

        if (!ptr[i])
        {
            for (j = i - 1; j >= 0; j--)
            {
                free(ptr[j]);
            }
            free(ptr);
            return NULL;
        }
    }

    /* Initialize all elements to 0 */
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            ptr[i][j] = 0;
        }
    }

    return ptr;
}
