#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return (starting at 0)
 *
 * Return: Pointer to the node at index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;

    if (!head)
        return (NULL);

    for (i = 0; i < index; i++)
    {
        head = head->next;
        if (!head)
            return (NULL);
    }

    return (head);
}
