#include"lists.h"

size_t print_list(const list_t *h)
{
    size_t i = 0;

    if (!h)
        return 0;
    while (h)
    {
        if (!(h->str))
        {
            printf("[0] (nil)\n");
        }
        else
            printf("[%ld] %s\n",_strlen(h->str) , h->str);
        h = h->next;
        i++;
    }
    return i;
}


size_t _strlen(char *str)
{
    size_t len = 0;
    while (str[len])
        len++;
    return len;
}
