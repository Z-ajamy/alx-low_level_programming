#include "main.h"
#include <limits.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 *
 * Description: This function converts an unsigned long integer to binary
 * and prints it using _putchar. It processes leading zeros efficiently.
 */
void print_binary(unsigned long int n)
{
    int i = 0, a = 0;
    unsigned long int temp = 0;

    if (!n)
    {
        _putchar('0');
        return;
    }
    
    while (n)
    {
        temp <<= 1;
        if (n & 1)
        {
            temp |= 1;
            a++;
        }
        else if (a == 0)
        {
            i++;
        }
        n = n >> 1;
    }
    
    while (temp)
    {
        if (temp & 1)
        {
            _putchar('1');
        }
        else
        {
            _putchar('0');
        }
        temp = temp >> 1;
    }
    
    for (; i > 0; i--)
    {
        _putchar('0');
    }
}
