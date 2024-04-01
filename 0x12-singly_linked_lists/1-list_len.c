#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	if (!node)
	{
		return (count);
	}

	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
