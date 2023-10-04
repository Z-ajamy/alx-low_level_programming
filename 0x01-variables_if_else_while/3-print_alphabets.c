#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: (0) success
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;

	}

	i = 65;
	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
