#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new;
    unsigned int i;

    if (!head || !(*head))
    {
        return NULL;
    }
    new = (listint_t *)malloc(sizeof(listint_t));
    if (!new)
        return NULL;
    new->n = n;
    while (i < idx && head)
    {
        head = head->next;
    }
    
    
}
