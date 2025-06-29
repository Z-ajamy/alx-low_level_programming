#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t i = 0;

    while (h)
    {
        printf("%i\n", h->n);
        h = h->next;
        i++;
    }

    return (i);
}
