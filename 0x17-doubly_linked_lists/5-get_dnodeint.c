#include"lists.h"
/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int count = 0;
	while (ptr && count < index)
	{
		if (!(ptr->next))
		{
			ptr = NULL;
			break;
		}
		ptr = ptr->next;
		count++;
	}
	return (ptr);
}
