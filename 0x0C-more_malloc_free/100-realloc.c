#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the previously allocated memory.
 * @old_size: Size of the previously allocated memory.
 * @new_size: New size of the memory block.
 *
 * Return: Pointer to the newly allocated memory block.
 *         If new_size is 0 and ptr is not NULL, returns NULL.
 *         If malloc fails, returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *p;
    char *s;
    unsigned int min, i;

    if (ptr && new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    if (new_size == old_size)
        return (ptr);

    p = malloc(new_size);
    if (!p)
        return (NULL);

    if (!ptr)
        return (p);

    min = (old_size > new_size) ? new_size : old_size;

    s = (char *)ptr;
    for (i = 0; i < min; i++)
        p[i] = s[i];

    free(ptr);
    return (p);
}
