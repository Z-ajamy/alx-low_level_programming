#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations
 * of three digits in ascending order using `putchar`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, n;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = (i + 1); j <= '9'; j++)
		{
			for (n = (j + 1); n <= '9'; n++)
			{
				putchar(i);
				putchar(j);
				putchar(n);
				if (i != '7' || j != '8' || n != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
