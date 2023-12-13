#include"main.h"
#include<stdlib.h>
/**
 * 
 * 
 * 
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    int *p;
    unsigned int i;

    if (nmemb == 0 || size == 0)
            return (NULL);
    p = (void *) malloc(nmemb * size);
    if (p == NULL)
        return (NULL);
    for (i = 0; i <= (nmemb * size); i++)
        p[i] = 0;
    return (p);
}
