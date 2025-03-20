#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * Return: Pointer to allocated memory.
 *         If malloc fails, the function terminates with status 98.
 */
void *malloc_checked(unsigned int b)
{
    void *a = malloc(b);

    if (!a)
        exit(98);

    return (a);
}
