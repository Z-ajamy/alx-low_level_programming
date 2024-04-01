#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *ptr;

	node = malloc(sizeof(list_t));
	if (!node)
	{return (NULL); }
	
	node->str = strdup(str);
	if (!(node->str))
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = NULL;
	if (!(*head))
	{*head = node;
	return (node); }
	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = node;
	return (node);
}
