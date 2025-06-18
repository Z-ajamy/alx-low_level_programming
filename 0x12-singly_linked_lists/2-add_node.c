#include "lists.h"

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

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be stored in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
    int len;
    list_t *new = (list_t *)malloc(sizeof(list_t));

    if (!new)
        return (NULL);

    len = _strlen(str);
    new->len = len;

    new->str = (char *)malloc(sizeof(char) * (len + 1));
    if (!(new->str))
    {
        free(new);
        return (NULL);
    }

    _strcpy(str, new->str);

    new->next = *head;
    *head = new;

    return (new);
}
