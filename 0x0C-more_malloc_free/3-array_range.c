#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from `min` to `max`.
 * @min: The smallest integer in the array.
 * @max: The largest integer in the array.
 *
 * Return: A pointer to the newly created array.
 *         If `min` is greater than `max`, returns NULL.
 *         If malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
    int n, i, j;
    int *ptr;

    if (max < min)
        return (NULL);

    n = max - min + 1;
    ptr = malloc(sizeof(*ptr) * n);
    if (!ptr)
        return (NULL);

    for (i = min, j = 0; i <= max; i++, j++)
        ptr[j] = i;

    return (ptr);
}
