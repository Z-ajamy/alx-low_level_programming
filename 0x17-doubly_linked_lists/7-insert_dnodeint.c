#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head of the list
 * @idx: Index to insert the new node at
 * @n: Integer value to store in the new node
 *
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i = 0;
    dlistint_t *new, *ptr;

    if (!h)
        return (NULL);

    new = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);

    new->n = n;

    if (idx == 0)
    {
        new->next = *h;
        new->prev = NULL;
        *h = new;

        if (new->next)
            new->next->prev = new;

        return (new);
    }

    ptr = *h;

    while (i < idx - 1 && ptr)
    {
        ptr = ptr->next;
        i++;
    }

    if (!ptr)
    {
        free(new);
        return (NULL);
    }

    new->next = ptr->next;
    new->prev = ptr;
    ptr->next = new;

    if (new->next)
        new->next->prev = new;

    return (new);
}
