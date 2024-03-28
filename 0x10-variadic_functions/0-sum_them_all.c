#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		unsigned int i;
		int j = 0;
		va_list args;

		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			j += va_arg(args, int);
		}
		va_end(args);
		return (j);
	}
}
