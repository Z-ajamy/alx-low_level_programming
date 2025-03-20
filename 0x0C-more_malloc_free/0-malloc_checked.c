#include"main.h"

void *malloc_checked(unsigned int b)
{
    void *a = malloc(b);
    if (!a)
    {
        exit(98);
    }
    return a;
}
