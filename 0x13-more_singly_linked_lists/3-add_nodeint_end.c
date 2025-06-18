#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Double pointer to the head of the list
 * @n: Integer to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *ptr = *head, *new;

    if (!head)
        return (NULL);

    new = (listint_t *)malloc(sizeof(listint_t));
    if (!new)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (!(*head))
    {
        *head = new;
        return (new);
    }

    while (ptr->next)
        ptr = ptr->next;

    ptr->next = new;

    return (new);
}