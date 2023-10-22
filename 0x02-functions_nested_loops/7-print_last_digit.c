#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the int to extract the last digit from
 * Return: value of the last digit
 */
	int print_last_digit(int i)
{
	if (i > 0)
	{
		_putchar((i % 10) + 48);
		return (i % 10);
	}
	else
	{
		i %= 10;
		i *= -1;

		_putchar((i) + 48);
		return (i);
	}
}
