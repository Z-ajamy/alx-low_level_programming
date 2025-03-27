#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to retrieve the bit from
 * @index: The index of the bit to retrieve (starting from 0)
 *
 * Return: The value of the bit at the given index (0 or 1), or 0 if n is 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned int i;
    unsigned long int idx = 1;

    if (index >= 64)
        return -1;
    
    if (n == 0)
        return (0);

    for (i = 0; i < index; i++)
    {
        idx <<= 1;
    }
    
    return ((idx & n) ? 1 : 0);
}
