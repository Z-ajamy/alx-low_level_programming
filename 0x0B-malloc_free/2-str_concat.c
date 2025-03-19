#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
    int i = 0;

    if (!str)
        return 0;

    while (str[i])
        i++;

    return i;
}

/**
 * str_concat - Concatenates two strings into newly allocated memory.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the newly allocated concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    int size1, size2, i, j;
    char *ptr;

    size1 = _strlen(s1);
    size2 = _strlen(s2);

    ptr = malloc((size1 + size2 + 1) * sizeof(char));
    if (!ptr)
        return NULL;

    /* Copy first string */
    for (i = 0; i < size1; i++)
        ptr[i] = s1[i];

    /* Copy second string */
    for (j = 0; j < size2; j++, i++)
        ptr[i] = s2[j];

    ptr[i] = '\0'; /* Null-terminate the new string */

    return ptr;
}
