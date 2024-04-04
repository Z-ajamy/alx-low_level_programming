#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}
	p = head;
	for (i = 0; i < index; i++)
	{
		if (!p)
		{
			return (NULL);
		}
		p = p->next;
	}
	return (p);
}
