#include "main.h"
#include <stdio.h>

/**
 * main - Finds the sum of even Fibonacci numbers up to 4,000,000.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long int i, a = 1, b = 0, res = 0, sum = 0;

	for (i = 1; res < 4000000; i++)
	{
		if (!(res % 2))
		{
			sum += res;
		}
		res += a;
		a = b;
		b = res;
	}
	printf("%ld\n", sum);

	return (0);
}
