#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n has no natural square root.
 */
int _sqr_recursion(int n, int i);
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}	
	return (_sqr_recursion(n, i));
}

/**
 * _sqr_recursion - Helper function to find the square root.
 * @n: The number to find the square root of.
 * @i: The current test value.
 *
 * Return: The square root of n, or -1 if no natural square root exists.
 */
int _sqr_recursion(int n, int i)
{
	i++;
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (_sqr_recursion(n, i));
}
