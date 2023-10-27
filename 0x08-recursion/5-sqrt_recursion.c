#include"main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: square root of n, or -1 if n doesn't have a natural square root
 */
	int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt(n, 0));
	}
}
/**
 * _sqrt - helper function to find square root recursively
 * @n: number to find square root of
 * @i: current guess for square root
 *
 * Return: square root of n, or -1 if not found
 */
int _sqrt(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
