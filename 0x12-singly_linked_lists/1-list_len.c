#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 *
 * @h: Pointer to the head of the list
 *
 * Description: This function iterates through a singly linked list
 *              and counts the number of nodes.
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}

	return (c);
}
