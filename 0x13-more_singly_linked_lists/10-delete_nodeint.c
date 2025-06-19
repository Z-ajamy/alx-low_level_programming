#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list
 * @head: Double pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *ptr, *p;

    if (!head || !(*head))
        return (-1);

    ptr = *head;
    p = *head;

    if (index == 0)
    {
        *head = p->next;
        free(ptr);
        return (1);
    }

    while (i < index && ptr)
    {
        i++;
        ptr = ptr->next;

        if ((i + 1) < index)
        {
            p = p->next;
        }
    }

    if (i < index || !ptr)
        return (-1);

    p->next = ptr->next;
    free(ptr);

    return (1);
}
