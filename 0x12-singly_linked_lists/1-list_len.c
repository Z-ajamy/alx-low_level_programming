#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
    size_t i = 0;

    while (h)
    {
        i++;
        h = h->next;
    }

    return (i);
}
