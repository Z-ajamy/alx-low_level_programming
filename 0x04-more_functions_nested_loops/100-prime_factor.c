#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
    unsigned long int i, max, n;

    n = 612852475143;

    while (!(n % 2))
    {
        max = 2;
        n /= 2;
    }

    for (i = 3; i * i <= n; i += 2)
    {
        while (!(n % i))
        {
            max = i;
            n /= i;
        }
    }

    if (n > 2)
        max = n;

    printf("%ld\n", max);

    return (0);
}
