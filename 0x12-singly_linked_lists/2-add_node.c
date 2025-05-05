#include "lists.h"
#include <stdlib.h> /* For malloc and free */

/**
 * add_node - Adds a new node at the beginning of a list_t list
 *
 * @head: Double pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Description: This function creates a new node, allocates memory for it,
 *              copies the string into the node's `str` field, and inserts
 *              the node at the beginning of the list.
 *
 * Return: Pointer to the new node, or NULL if failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	int count = 0;
	int i;
	char *s = NULL;

	ptr = (list_t *)malloc(sizeof(list_t));
	if (!ptr)
	{
		return (NULL);
	}

	if (!str)
	{
		s = NULL;
	}
	else
	{
		count = len(str);
		s = (char *)malloc(sizeof(char) * (count + 1));
		if (!s)
		{
			free(ptr);
			return (NULL);
		}
		for (i = 0; i <= count; i++)
		{
			s[i] = str[i];
		}
	}

	ptr->len = count;
	ptr->str = s;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
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
