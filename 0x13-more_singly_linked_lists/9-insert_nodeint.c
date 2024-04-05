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
	listint_t *new_node, *count_ptr, *next;
	unsigned int count = 0;

	if (!(*head) || !(head))
	{return (NULL); }
	count_ptr = *head;
	while (count_ptr)
	{
		count++;
		count_ptr = count_ptr->next;
	}
	if (count < idx)
	{return (NULL); }
	new_node = malloc(sizeof(head));
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = (*head)->next;
		(*head) = new_node;
		return (new_node);
	}
	count_ptr = next = *head;
	for (count = 0; count < idx ; count++)
	{
		if (count < (idx - 1))
		{
			count_ptr = count_ptr->next;
		}
		next = next->next;
	}
	new_node->next = next;
	count_ptr->next = new_node;
	return (new_node);
}
