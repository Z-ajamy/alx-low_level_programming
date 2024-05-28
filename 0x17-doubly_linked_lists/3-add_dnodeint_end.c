#include"lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *tail, *new_node;

	ptr = tail = *head;
	while (ptr != NULL)
	{
		tail = ptr;
		(ptr) = (ptr)->next;
	}
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		free(ptr);
		free(tail);
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = tail;
	if (!tail)
	{
		(*head) = new_node;
		return (new_node);
	}
	tail->next = new_node;
	return (new_node);
}
