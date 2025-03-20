#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory. If `nmemb` or `size` is 0,
 *         or if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr;
    unsigned int i;

    if (!nmemb || !size)
        return (NULL);

    ptr = malloc(nmemb * size);
    if (!ptr)
        return (NULL);

    for (i = 0; i < nmemb * size; i++)
        ptr[i] = 0;

    return (ptr);
}
