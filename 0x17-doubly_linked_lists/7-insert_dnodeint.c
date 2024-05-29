#include"lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!h)
	{
		free(new_node);
		return (NULL);
	}
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	while (ptr && (idx - 1) > 0)
	{
		ptr = ptr->next;
		idx--;
	}
	if (!ptr && (idx) > 0)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = ptr;
	if (ptr->next)
	{
		new_node->next = ptr->next;
		(ptr->next)->prev = new_node;
	}
	ptr->next = new_node;
	return (new_node);
}
