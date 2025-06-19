#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Integer to store in the new node
 *
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *ptr;

    if (!head)
        return (NULL);

    ptr = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (!ptr)
        return (NULL);

    ptr->n = n;
    ptr->next = *head;
    ptr->prev = NULL;

    if (*head)
        (*head)->prev = ptr;

    *head = ptr;

    return (ptr);
}
