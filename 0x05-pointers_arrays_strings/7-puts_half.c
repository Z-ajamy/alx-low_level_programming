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
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
		continue;

	for (n = i / 2; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
