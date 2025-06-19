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
    dlistint_t *ptr, *p;
    unsigned int i = 0;

    if (!h)
        return (NULL);

    ptr = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (!ptr)
        return (NULL);

    ptr->n = n;

    if (!(*h) && idx == 0)
    {
        ptr->next = NULL;
        ptr->prev = NULL;
        *h = ptr;
    }

    p = *h;

    while (i < idx && p->next)
    {
        i++;
        p = p->next;
    }

    if (i != (idx - 1) && i != idx)
        return (NULL);

    if (i == idx)
    {
        p = p->next;
        ptr->next = p;
        ptr->prev = p->prev;
        p->prev = ptr;
        return (ptr);
    }

    if ((i + 1) == idx)
    {
        ptr->next = NULL;
        ptr->prev = p;
        p->next = ptr;
        return (ptr);
    }

    return (NULL);
}
