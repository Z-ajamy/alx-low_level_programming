#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head)
{
    list_t *ptr = head, *temp;

    if (!ptr)
        return;

    while (ptr)
    {
        temp = ptr->next;
        free(ptr->str);
        free(ptr);
        ptr = temp;
    }
}
