#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    if (!nmemb || !size)
        return NULL;
    
    ptr = calloc(nmemb, size);
    if (!ptr)
        return NULL;
    return ptr;
    
}
