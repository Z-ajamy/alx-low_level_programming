#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */

void print_number(int n)
{
	int s;
	unsigned int k;

	if (n < 0)
	{
		_putchar('-');
		k = n * -1;
	}
	else
		k = n;
	s = 1;

	while (k / s >= 10)
	{
		s *= 10;
	}

	for (; s >= 1; s /= 10)
	{
		_putchar(48 + (k / s) % 10);
	}
}
