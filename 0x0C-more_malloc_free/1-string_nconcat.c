#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int i = 0;

    if (s == NULL)
        return (i);

    while (s[i])
        i++;

    return (i);
}

/**
 * string_nconcat - Concatenates two strings up to n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated memory containing s1 followed
 *         by the first n bytes of s2, and null-terminated. If malloc fails,
 *         the function returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int size1, size2;
    char *ptr;
    int i, j;

    if (!s1)
        s1 = "";
    if (!s2)
        s2 = "";

    size1 = _strlen(s1);
    size2 = _strlen(s2);

    if ((unsigned int)size2 < n)
        n = size2;

    ptr = malloc(sizeof(*ptr) * (size1 + n + 1));
    if (!ptr)
        return (NULL);

    for (i = 0; i < size1; i++)
        ptr[i] = s1[i];

    for (j = 0; (unsigned int)j < n; i++, j++)
        ptr[i] = s2[j];

    ptr[i] = '\0';

    return (ptr);
}
