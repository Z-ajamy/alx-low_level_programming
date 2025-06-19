#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Integer to store in the new node
 *
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *ptr, *new;

    if (!head)
        return (NULL);

    new = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);

    new->n = n;
    ptr = *head;

    if (!ptr)
    {
        new->prev = NULL;
        new->next = NULL;
        *head = new;
        return (new);
    }

    while (ptr->next)
        ptr = ptr->next;

    new->next = NULL;
    ptr->next = new;
    new->prev = ptr;

    return (new);
}
