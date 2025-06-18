#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Double pointer to the head of the list
 * @n: Integer to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    if (!head)
        return NULL;
    
    new = (listint_t *)malloc(sizeof(listint_t));

    if (!new)
        return (NULL);

    new->n = n;
    new->next = *head;
    *head = new;

    return (new);
}
