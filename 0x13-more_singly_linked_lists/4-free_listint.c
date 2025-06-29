#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list
 */
void free_listint(listint_t *head)
{
    listint_t *ptr = head, *temp;

    if (!ptr)
        return;

    while (ptr)
    {
        temp = ptr->next;
        free(ptr);
        ptr = temp;
    }
}
