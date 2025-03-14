#include "main.h"

/**
 * _prime_number - Helper function to check for prime numbers
 * @n: The number to check
 * @i: The current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _prime_number(int n, int i);

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1 || !(n % 2))
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	return (_prime_number(n, 1));
}

/**
 * _prime_number - Recursively checks if a number is prime
 * @n: The number to check
 * @i: The current divisor being tested
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _prime_number(int n, int i)
{
	if (i * i == n)
	{
		return (0);
	}
	if (i >= (n / 2 + 1))
	{
		return (1);
	}

	return (_prime_number(n, i + 2));
}
