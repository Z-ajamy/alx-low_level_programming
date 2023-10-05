#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *@n: any number
 *Return: last digit of a number
 */
	int print_last_digit(int n)
{
	long int a, b;

	if (n < 0)
	{
		a = -n;
	}
	else
	{
		a = n;
	}
	b = a % 10;
	_putchar (48 + b);
	return (b);
}
