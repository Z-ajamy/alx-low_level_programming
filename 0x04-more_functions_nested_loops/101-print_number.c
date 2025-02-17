#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */

void print_number(int n)
{
	int s;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	s = 1;

	while (n / s >= 10)
	{
		s *= 10;
	}

	for (; s >= 1; s /= 10)
	{
		_putchar(48 + (n / s) % 10);
	}
}
