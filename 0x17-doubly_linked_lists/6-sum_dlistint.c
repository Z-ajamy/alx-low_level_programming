#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
    int i = 0;

    while (head)
    {
        i += head->n;
        head = head->next;
    }

    return (i);
}
