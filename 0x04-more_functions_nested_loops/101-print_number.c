#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */

void print_number(int n)
{
	int i, len, k, s, a;

	k = n;

	if (n < 0)
	{
		_putchar('-');
		k *= -1;
	}

	len = 1;
	i = 10;

	while (n /= i)
	{
		len++;
	}

	s = 1;

	for (i = len; i > 0; i--)
	{
		for (n = 1; n <= i - 1; n++)
		{
			s *= 10;
		}

		a = k / s;
		a %= 10;
		_putchar(48 + a);
		s = 1;
	}
}
