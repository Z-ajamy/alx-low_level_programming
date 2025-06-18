#include "lists.h"

/**
 * _strlen - Calculates the length of a string
 * @str: The string to calculate length of
 *
 * Return: The length of the string
 */
size_t _strlen(char *str)
{
    size_t i = 0;

    if (str)
    {
        while (str[i] != '\0')
            i++;
    }

    return (i);
}

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t size = 0, i;

    while (h)
    {
        i = _strlen(h->str);

        if (i == 0)
        {
            printf("[%lu] %s\n", _strlen(h->str), "(nil)");
        }
        else
        {
            printf("[%lu] %s\n", _strlen(h->str), h->str);
        }

        size++;
        h = h->next;
    }

    return (size);
}
