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

    if (nmemb == 0 || size == 0)
        return (NULL);
    p = (void *) malloc(nmemb * size);
    
    return (p);

}
