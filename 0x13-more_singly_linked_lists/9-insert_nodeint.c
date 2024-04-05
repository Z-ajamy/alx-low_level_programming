#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *next = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!(head))
	{
		return (NULL);
	}
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = next;
		(*head) = new_node;
		return (new_node);
	}
	if (idx != 0)
	{
		for (i = 0; next && i < idx; i++)
		if (i == idx - 1)
		{
			new_node->next = next->next;
			next->next = new_node;
			return (new_node);
		}
		else
			next = next->next;
	}
	return (NULL);
}
