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
	listint_t *new_node, *next;
	unsigned int count = 0;

	if (!(head) || !(*head))
	{return (NULL); }
	next = *head;
	while (next)
	{
		count++;
		next = next->next;
	}
	if (count < idx)
	{return (NULL); }
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{return (NULL); }
	
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	for (count = 0; count < (idx - 1) ; count++)
	{
		next = next->next;
	}
	new_node->next = next->next;
	next->next = new_node;
	return (new_node);
}
