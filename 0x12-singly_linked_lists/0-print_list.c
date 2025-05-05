#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 *
 * @h: Pointer to the head of the singly linked list
 *
 * Description: This function traverses a singly linked list and
 *              prints the length and string of each node.
 *              If a node's string is NULL, it prints (nil).
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		if (!(h->str))
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (count);
}
