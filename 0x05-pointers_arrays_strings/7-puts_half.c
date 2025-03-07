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
	int i, n = 0;

	for (i = 0; str[i] != '\0'; i++)
		continue;

	n = ((i / 2 == 0) ? (i / 2) : ((i + 1) / 2));
	for (; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
