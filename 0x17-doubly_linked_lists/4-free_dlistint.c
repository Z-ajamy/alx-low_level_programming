#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *ptr;

    while (head)
    {
        ptr = head->next;
        free(head);
        head = ptr;
    }
}
