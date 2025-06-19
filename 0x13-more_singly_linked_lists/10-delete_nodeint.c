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
        return -1;

    ptr = *head;
    if (index == 0)
    {
        *head = ptr->next;
        free(ptr);
        return 1;
    }
    while (i < index - 1 && ptr)
    {
        ptr = ptr->next;
        i++;
    }
    if (!ptr || !(ptr->next))
        return -1;
    
    p = ptr->next;
    ptr->next = p->next;
    free(p);
    return 1;
    
}
