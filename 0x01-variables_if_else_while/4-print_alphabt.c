#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints lowercase alphabets using `putchar`,
 * except for the letters 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	while (i != ('z' + 1))
	{
		if (i == 'q' || i == 'e')
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
