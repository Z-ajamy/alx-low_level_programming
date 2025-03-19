#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: Size of the array.
 * @c: Character to initialize the array with.
 * 
 * Return: Pointer to the created array, or NULL if size is 0 or memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *ptr;

    if (size == 0)
        return (NULL);

    ptr = malloc(size * sizeof(char));
    if (ptr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        ptr[i] = c;

    return (ptr);
}
