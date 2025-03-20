#include"main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *p;
    char *s;
    int min, i;

    if (ptr && !new_size)
    {
        free (ptr);
        return NULL;
    }
    if (new_size == old_size)
        return ptr;
    p = malloc(new_size);
    if (!p)
    {
        return NULL;
    }
    if (old_size > new_size)
    {
        min = new_size;
    }
    else
        min = old_size;
    s= (char*)ptr;
    for (i = 0; i < min; i++)
    {
        p[i] = s[i];
    }
    free(ptr);
    return p;

    
    
    
}
