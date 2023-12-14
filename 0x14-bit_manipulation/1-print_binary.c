#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int i, flag = 0;

	i = sizeof(n) * 8 - 1;
	if (n == 0)
		_putchar('0');

	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');
		i--;
	}
}
