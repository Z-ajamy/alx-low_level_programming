#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations
 * of two digits in ascending order using `putchar`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = (i + 1); j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
