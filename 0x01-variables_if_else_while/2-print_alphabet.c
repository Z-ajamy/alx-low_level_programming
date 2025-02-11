#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints lowercase alphabets using `putchar`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i != ('z' + 1))
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
