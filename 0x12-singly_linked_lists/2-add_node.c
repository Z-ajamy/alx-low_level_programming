#include"lists.h"

list_t *add_node(list_t **head, const char *str)
{
    list_t* ptr = NULL;
    int count = 0;
    int i;
    char *s = NULL;

    ptr = (list_t*)malloc(sizeof(list_t));
    if (!ptr)
    {
        return NULL;
    }
    if (!str)
    {
        ptr->str = NULL;
    }
    else
    {
        count = len(str);
        s = (char*)malloc(sizeof(char) * (count + 1));
        if (!str)
        {
            free(ptr);
            return NULL;
        }
    }
    ptr->len = count;
    for (i = 0; i <= count; i++)
    {
        s[i] = str[i];
    }
    ptr->str = s;
    ptr->next = *head;
    *head = ptr;
    return ptr;
}

int len(const char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}
