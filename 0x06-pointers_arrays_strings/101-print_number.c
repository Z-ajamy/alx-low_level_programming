#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int len = 0, m, i, a;

	if (n < 0)
	{
		_putchar('-');
		if (n < -2147483647)
		{
			_putchar('2');
			n = n % 1000000000; 
		}
		n *= -1;
	}
	
	
	m = n;

	while (n /= 10)
		len++;
	len++;

	for (i = len; i > 0; i--)
	{
		a = m / _pow(10, i - 1);
		a %= 10;
		_putchar(a + '0');
	}
}

/**
 * _pow - Computes the power of a number.
 * @a: The base number.
 * @b: The exponent.
 *
 * Return: The result of a raised to the power of b.
 */
int _pow(int a, int b)
{
	int i, temp;

	if (b == 0)
		return (1);
	temp = 1;
	for (i = 0; i < b; i++)
	{
		temp *= a;
	}
	return (temp);
}
