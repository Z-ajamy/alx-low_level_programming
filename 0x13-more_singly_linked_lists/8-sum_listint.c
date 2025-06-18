#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
    int res = 0;

    while (head)
    {
        res += head->n;
        head = head->next;
    }

    return (res);
}
