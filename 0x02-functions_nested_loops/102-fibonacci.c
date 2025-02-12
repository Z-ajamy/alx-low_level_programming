#include "main.h"
#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, By starting with 1 and 2.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long int i, a = 1, b = 0, res = 0;

	for (i = 1; i <= 50; i++)
	{
		res = a + b;
		a = b;
		b = res;
		printf("%ld", res);

		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
