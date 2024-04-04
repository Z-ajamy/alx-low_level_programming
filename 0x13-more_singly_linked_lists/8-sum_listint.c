#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum = 0;

	if (!head)
	{
		return (sum);
	}
	p = head;
	while (p)
	{
		sum = sum + (p->n);
		p = p->next;
	}
	return (sum);
}
