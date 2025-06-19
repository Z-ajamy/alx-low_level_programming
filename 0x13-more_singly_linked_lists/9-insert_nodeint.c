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
    unsigned int i = 0;
    listint_t *new, *ptr;

    if (!head)
        return NULL;
    
    new = (listint_t *)malloc(sizeof(listint_t));
    if (!new)
        return NULL;
    new->n = n;
    
    ptr = *head;

    if (idx == 0)
    {
        *head = new;
        new->next = ptr;
        return new;
    }
    
    while (i < idx - 1 && ptr)
    {
        ptr = ptr->next;
        i++;
    }
    if (!ptr)
    {
        free(new);
        return NULL;
    }
    
    new->next = ptr->next;
    ptr->next = new;
    return new;
}
