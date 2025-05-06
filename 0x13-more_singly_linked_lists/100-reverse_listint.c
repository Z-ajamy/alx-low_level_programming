#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list
 * @head: Double pointer to the head of the linked list
 *
 * Return: Pointer to the new head of the reversed list
 *
 * Description:
 * This function iterates through the entire linked list and
 * reverses the order of the nodes. It modifies the `next`
 * pointers of each node to point to the previous node instead
 * of the next, effectively reversing the list in-place.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nex = NULL;

	while (*head)
	{
		nex = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nex;
	}
	*head = prv;

	return (*head);
}
