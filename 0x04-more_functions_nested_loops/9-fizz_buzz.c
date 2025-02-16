#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100 with FizzBuzz rules.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3))
		{
			printf("Fizz");
			if (!(i % 5))
			{
				printf("Buzz");
			}
		}
		else if (!(i % 5))
		{
			printf("Buzz");
		}
		else
			printf("%d", i);

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
