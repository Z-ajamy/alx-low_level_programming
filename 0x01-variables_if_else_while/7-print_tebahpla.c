#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet in reverse order
 * using `putchar`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'z';

	while (i != ('a' - 1))
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
