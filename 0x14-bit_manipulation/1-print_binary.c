#include "main.h"

void print_binary(unsigned long int n)
{
    int i, size, shift;

    size = 8 * sizeof(unsigned long int);
    i = 1;
    for (shift = 0; shift < size; shift++)
    {
        i = i << shift;
        if (n & i)
        {
            _putchar('1');
        }
        else
            _putchar('0');
    }
}
