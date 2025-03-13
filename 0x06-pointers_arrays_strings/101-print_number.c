#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}

	if (!(m / 10))
	{
		_putchar('0' + m);
		return;
	}

	print_number(m / 10);
	_putchar(m % 10 + '0');
}
