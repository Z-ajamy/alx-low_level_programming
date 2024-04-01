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
	const list_t *ptr;
	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (!(ptr->str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
			count++;
		}
		ptr = ptr->next;
	}
	return (count);
}
