#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and set the head to NULL
 * @head: Pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
    listint_t *ptr = *head, *temp;

    if (!head || !ptr)
        return;

    while (ptr)
    {
        temp = ptr->next;
        free(ptr);
        ptr = temp;
    }
    *head = NULL;
}
