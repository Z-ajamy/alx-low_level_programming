#include "lists.h"
#include <stdlib.h> /* For free */

/**
 * free_list - Frees a list_t list
 *
 * @head: Pointer to the head of the list
 *
 * Description: This function frees each node of the list and the memory
 *              allocated for the string in each node.
 */
void free_list(list_t *head)
{
	list_t *ptr = NULL;

	while (head)
	{
		free(head->str);
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
