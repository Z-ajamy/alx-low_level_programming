#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string containing the binary number
 *
 * Return: The converted number, or 0 if there is an invalid character
 *         or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int n = 0;
    int i = 0;

    if (!b)
        return (0);
    
    while (b[i])
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
        
        if (b[i] == '0' && n)
        {
            n <<= 1;
        }
        
        if (b[i] == '1')
        {
            n <<= 1;
            n |= 1;
        }
        i++;
    }
    return (n);
}
