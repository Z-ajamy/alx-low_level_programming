#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	if (!head)
	{
		return;
	}
	while (*head)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
	/**
	 * Avoid accessing invalid memory addresses
	 * or list elements that are already free
	*/
}
