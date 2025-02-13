#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
    if (n > 1)
        print_binary(n >> 1); /* Right shift n by 1 */
    _putchar((n & 1) + '0');
    printf("%ld", n); /* Mask the least significant bit and print */
}
