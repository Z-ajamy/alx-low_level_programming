#include "main.h"
#include <limits.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 *
 * Description: This function converts an unsigned long integer
 * to binary and prints it using _putchar.
 */
void print_binary(unsigned long int n)
{
    int i = 0;
    char ptr[100];
    
    if (n == 0)
    {
        _putchar('0');
        return;
    }
    
    while (n)
    {
        if (!(n & 1))
        {
            ptr[i] = '0';
        }
        else
        {
            ptr[i] = '1';
        }
        i++;        
        n = n >> 1;
    }
    
    i--;
    while (i >= 0)
    {
        _putchar(ptr[i]);
        i--;
    }
}
