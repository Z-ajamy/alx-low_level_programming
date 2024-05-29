#include"lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int res = 0;

	while (ptr)
	{
		res += ptr->n;
		ptr = ptr->next;
	}
	return (res);
}
