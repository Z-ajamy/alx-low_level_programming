#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints single-digit numbers (0-9) using `putchar`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48; /* ASCII code for '0' */

	while (i != 58) /* ASCII code for ':' (stops at '9' which is 57) */
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
