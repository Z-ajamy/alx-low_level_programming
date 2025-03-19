#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 * 
 * Return: Length of the string.
 */
int _strlen(char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return (i);
}

/**
 * _strdup - Duplicates a string into newly allocated memory.
 * @str: The input string to be duplicated.
 * 
 * Return: Pointer to the newly allocated string or NULL if allocation fails.
 */
char *_strdup(char *str)
{
    char *ptr;
    int size, i;

    if (!str)
        return (NULL);

    size = _strlen(str);
    ptr = malloc((size + 1) * sizeof(char));

    if (!ptr)
        return (NULL);

    for (i = 0; i <= size; i++)
        ptr[i] = str[i];

    return (ptr);
}
