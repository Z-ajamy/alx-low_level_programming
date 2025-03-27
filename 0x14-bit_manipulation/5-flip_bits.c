#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to convert one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int i = 0;

    while (n || m)
    {
        if ((n & 1) != (m & 1))
        {
            i++;
        }
        n >>= 1;
        m >>= 1;
    }
    
    return (i);
}
