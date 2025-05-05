#include "lists.h"
#include <stdlib.h> /* For malloc and free */

/**
 * add_node_end - Adds a new node at the end of a list_t list
 *
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Description: This function adds a new node at the end of the list,
 *              allocates memory for the node, copies the string into the
 *              node's `str` field, and sets the `next` pointer of the last
 *              node to the new node.
 *
 * Return: Pointer to the new node, or NULL if failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *p;
	int c, i;
	char *s;

	ptr = *head;
	while (ptr && ptr->next)
	{
		ptr = ptr->next;
	}

	p = (list_t *)malloc(sizeof(list_t));
	if (!p)
	{
		return (NULL);
	}

	c = len(str);
	s = (char *)malloc(sizeof(char) * (c + 1));
	if (!s)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i <= c; i++)
	{
		s[i] = str[i];
	}

	p->next = NULL;
	p->str = s;
	p->len = c;

	if (!ptr)
	{
		*head = p;
		return (p);
	}
	else
	{
		ptr->next = p;
	}

	return (p);
}

/**
 * len - Returns the length of a string
 *
 * @str: String whose length is to be computed
 *
 * Return: Length of the string
 */
int len(const char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}
