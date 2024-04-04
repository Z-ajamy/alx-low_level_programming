#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;
	ptr = head;
	if (!head)
	{
		return;
	}
	
	if (ptr->next == NULL)
	{
		free(head);
		return;
	}
	while (head)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
