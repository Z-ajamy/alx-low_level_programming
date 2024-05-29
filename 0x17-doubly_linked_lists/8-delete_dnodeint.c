#include"lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		if (!(ptr->next))
		{
			free(ptr);
			*head = NULL;
			return (1);
		}
		*head = (*head)->next;
		ptr->next->prev = NULL;
		free(ptr);
		return (1);
	}
	while (ptr && index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	if (!ptr && index > 0)
		return (-1);
	(ptr->prev)->next = ptr->next;
	if (ptr->next)
	{
		(ptr->next)->prev = ptr->prev;
	}
	free(ptr);
	return (1);
}
