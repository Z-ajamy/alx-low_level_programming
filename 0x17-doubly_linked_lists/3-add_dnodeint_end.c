#include"lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *ptr, *tail, *new_node;
    ptr = tail = *head;
    while (ptr != NULL)
    {
        tail = ptr;
        (ptr) = (ptr)->next;
    }
    new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = tail;
    if (!tail)
    {
        (*head) = new_node;
        return(new_node);
    }
    tail->next = new_node;
    return(new_node);
}
