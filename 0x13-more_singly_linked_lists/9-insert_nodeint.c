#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Double pointer to the head of the list
 * @idx: Index where the new node should be added
 * @n: Integer value to insert
 *
 * Return: Address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new, *ptr;
    unsigned int i = 0;
    int temp;

    if (!head)
        return (NULL);

    ptr = *head;

    new = (listint_t *)malloc(sizeof(listint_t));
    if (!new)
        return (NULL);

    while (i < idx && ptr)
    {
        i++;
        ptr = ptr->next;
    }

    if (i != idx)
    {
        free(new);
        return (NULL);
    }

    if (i == 0)
    {
        new->next = ptr;
        *head = new;
        return (new);
    }

    temp = ptr->n;
    ptr->n = n;
    new->n = temp;

    new->next = ptr->next;
    ptr->next = new;

    return ptr;
}
