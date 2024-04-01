#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (!head)
	{
		return;
	}
	while (head->next)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
