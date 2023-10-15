#include<stdio.h>
#include<stdlib.h>
/**
 * 
 * 
*/
char *create_array(unsigned int size, char c)
{
    char *ptr;
    unsigned int i;
    if (size == 0)
        return(NULL);

    ptr = malloc(sizeof(char) * size);

    if (ptr == NULL)
    return(0);

    for (i=0; i < size; i++)
    {
        ptr[i] = c;
    }
    *(ptr + i) = '\0';
    return(ptr);
}
