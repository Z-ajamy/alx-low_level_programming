#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be stored in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
    int len;
    list_t *ptr = *head, *new;

    if (!head)
        return (NULL);

    new = (list_t *)malloc(sizeof(list_t));
    if (!new)
        return (NULL);

    len = _strlen(str);
    new->len = len;
    new->next = NULL;

    new->str = (char *)malloc(sizeof(char) * len);
    if (!(new->str))
    {
        free(new);
        return (NULL);
    }

    _strcpy(str, new->str);

    if (!(*head))
    {
        *head = new;
        return (new);
    }

    while (ptr->next)
        ptr = ptr->next;

    ptr->next = new;

    return (new);
}

/**
 * _strcpy - Copies a string from s1 to s2
 * @s1: Source string
 * @s2: Destination string
 */
void _strcpy(const char *s1, char *s2)
{
    int i = 0;

    if (!s1 || !s2)
        return;

    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }

    s2[i] = '\0';
}
