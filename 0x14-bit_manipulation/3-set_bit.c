#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the number to modify
 * @index: The index of the bit to set (starting from 0)
 *
 * Return: 1 if successful, or -1 if an error occurred (index out of range)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned int i;
    unsigned long int idx = 1;

    if (index >= 64)
        return (-1);

    for (i = 0; i < index; i++)
    {
        idx <<= 1;
    }
    
    *n = (idx | *n);
    return (1);
}
