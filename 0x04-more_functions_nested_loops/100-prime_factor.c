#include <stdio.h>
#include <math.h>

/**
 * if_prime - Checks if a number is prime.
 * @x: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int if_prime(unsigned long x);

/**
 * main - Finds the largest prime factor of a given number.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long int j, i = 612852475143 / 2;

	for (j = i; i > 0; j--)
	{
		if (if_prime(j))
		{
			printf("%ld\n", j);
			return (0);
		}
	}

	return (0);
}

/**
 * if_prime - Checks if a number is prime.
 * @x: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int if_prime(unsigned long x)
{
	unsigned long i;

	if (x <= 1)
		return (0);

	for (i = 2; i <= (int)(sqrt(x)); i++)
	{
		if (!(x % i))
			return (0);
	}

	return (1);
}
