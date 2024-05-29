#include"lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head)
	{
		if (!(head->next))
		{
			free(head);
			break;
		}
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
