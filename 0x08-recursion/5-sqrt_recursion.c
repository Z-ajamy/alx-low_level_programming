#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n has no natural square root.
 */
int _sqrt_recursion(int n)
{
	static int i = 1;

	if (n < 0)
	{
		i = 1;
		return (-1);
	}
	if (n == 0)
	{
		i = 1;
		return (0);
	}
	else if (i * i == n)
	{
		int res = i;
		i = 1;
		return (res);
	}
	else if (i * i > n)
	{
		i = 1;
		return (-1);
	}
	
	i++;
	return (_sqrt_recursion(n));
}
