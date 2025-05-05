#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t* ptr;
    list_t* p;
    int c, i;
    char* s;

    ptr = *head;
    if (ptr)
    {
        while (ptr->next)
        {
            ptr = ptr->next;
        }
    }
    
    p = (list_t*)malloc(sizeof(list_t));
    if (!p)
    {
        return NULL;
    }
    c = len(str);
    s = (char*)malloc(sizeof(char) * (c + 1));
    if (!s)
    {
        free(p);
        return NULL;
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
        return p;
    }
    else
    {
        ptr->next = p;
    }
    return p;
}


int len(const char *str)
{
        int i = 0;

        while (str[i])
        {
                i++;
        }

        return (i);
}
