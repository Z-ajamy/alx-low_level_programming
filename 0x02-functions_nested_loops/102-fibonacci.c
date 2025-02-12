#include "main.h"
#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long int i, a = 0, b = 1, res = 0;

	for (i = 1; i <= 49; i++)
	{
		printf("%ld, ", res);

		if (i % 2)
		{
			a = res;
		}
		else
		{
			b = res;
		}

		res = a + b;
	}
	printf("%ld\n", res);

	return (0);
}
