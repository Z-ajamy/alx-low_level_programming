#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all hexadecimal digits (0-9, a-f)
 * using `putchar`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = '0', n = 'a';

	while (i != ('9' + 1))
	{
		putchar(i);
		i++;
	}

	while (n != ('f' + 1))
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
