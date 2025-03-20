#include"main.h"

void *malloc_checked(unsigned int b)
{
    int *a = malloc(sizeof(*a) * b);
    if (!a)
    {
        exit(98);
    }
    return a;
}
