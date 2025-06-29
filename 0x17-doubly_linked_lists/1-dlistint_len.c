#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
    if (!h)
        return (0);

    return (1 + dlistint_len(h->next));
}
