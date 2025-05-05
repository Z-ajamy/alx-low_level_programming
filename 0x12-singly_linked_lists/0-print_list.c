#include"lists.h"


size_t print_list(const list_t *h)
{
    size_t count = 0;
    while (h)
    {
        count++;
        if (!(h->str))
        {
            printf("[0] (nil)\n");
            h = h->next;
            continue;
        }
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
    }
    return count;
}
