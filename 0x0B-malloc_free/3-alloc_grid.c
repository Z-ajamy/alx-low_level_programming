#include "main.h"

int **alloc_grid(int width, int height)
{
    int **ptr;
    int i, j;
    if (width <= 0 || width <= 0)
        return NULL;

    ptr = (int **) malloc(sizeof(int *) * height);
    if (!ptr)
        return NULL;
    
    for (i = 0; i < height; i++)
    {
        ptr[i] = (int *) malloc(sizeof(int) * width);
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

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            ptr[i][j] = 0;
        }
        
    }
    return ptr;
    
    
    
    
}
