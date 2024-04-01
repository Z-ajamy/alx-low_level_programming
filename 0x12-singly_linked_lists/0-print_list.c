#include"lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	while (node)
	{
		if (!(node->str))
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", node->len, node->str);
		count++;
		node = node->next;
	}
	return (count);
}
