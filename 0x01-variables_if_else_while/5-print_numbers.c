#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints single-digit numbers from 0 to 9
 * using `printf`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i != 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
