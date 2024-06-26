#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next, *ptr;
	unsigned int i;

	if (!head || !(*head))
	{
		return (-1);
	}
	next = ptr = (*head);
	if (index == 0)
	{
		(*head) = ptr->next;
		free(next);
		return (1);
	}
	for (i = 0; ptr && i < index - 1; i++)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
	}
	next = ptr->next;
	ptr->next = next->next;
	free(next);
	return (1);
}
