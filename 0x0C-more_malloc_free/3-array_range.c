#include "main.h"


int *array_range(int min, int max)
{
    int n, i, j;
    int *ptr;

    if (max < min)
        return NULL;
    n = max - min + 1;
    ptr = malloc(sizeof(*ptr) * n);
    if (!ptr)
        return NULL;
    
    for (i = min, j = 0; i <= max; i++, j++)
    {
        ptr[j] = i; 
    }
    
    return ptr;
}
