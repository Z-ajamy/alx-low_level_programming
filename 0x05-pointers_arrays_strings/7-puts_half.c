#include"main.h"
/**
 * puts_half - prints half of the string
 * @str: string to print
 * len: string length
 * i: counter
 *
 * Return: always void
 */

	void puts_half(char *str)
{
	int i, n, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}
	}

	else if (i % 2 == 1)
	{
		n = ((i - 1) / 2) - 1;
		for (j = n; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
