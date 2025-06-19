#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *ptr, *p;

    if (!head || !(*head))
        return (-1);

    ptr = *head;

    if (index == 0)
    {
        *head = (*head)->next;

        if (*head)
            (*head)->prev = NULL;

        free(ptr);
        return (1);
    }

    while (i < index - 1 && ptr)
    {
        ptr = ptr->next;
        i++;
    }

    if (!ptr || !(ptr->next))
        return (-1);

    p = ptr->next;
    ptr->next = p->next;
    free(p);

    if (ptr->next)
        ptr->next->prev = ptr;

    return (1);
}
