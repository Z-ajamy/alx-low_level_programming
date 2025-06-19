#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return (starting from 0)
 *
 * Return: Address of the node at index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    while (head && i < index)
    {
        head = head->next;
        i++;
    }

    if (i < index)
        return (NULL);

    return (head);
}
