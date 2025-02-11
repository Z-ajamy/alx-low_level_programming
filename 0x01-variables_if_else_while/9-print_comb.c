#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints single-digit numbers (0-9) separated by 
 * commas and spaces using `putchar`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i != ('9' + 1))
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
