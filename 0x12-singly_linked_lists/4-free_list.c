#include"lists.h"

void free_list(list_t *head)
{
    list_t *ptr = NULL;
    while (head)
    {
        free(head->str);
        ptr = head->next;
        free(head);
        head = ptr;
    }
    
}
