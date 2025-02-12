#include "main.h"
#include <stdio.h>

/**
 * main - Computes and prints the sum of all multiples of 3 or 5 below 1024.
 *
 * Description: Iterates through numbers below 1024 and adds those
 * that are divisible by 3 or 5 to the result. The final sum is printed.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i, res = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			res += i;
		}
	}

	printf("%d\n", res);

	return (0);
}
