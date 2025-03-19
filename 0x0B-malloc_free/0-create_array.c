#include"main.h"


char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *ptr;
    if (size == 0)
        return 0;
    ptr = (char *) malloc(size * sizeof(char));
    if (!ptr)
    {
        return NULL;
    }
    
    for (i = 0; i < size; i++)
    {
        ptr[i] = c;
    }
    
    return ptr;
    
}
