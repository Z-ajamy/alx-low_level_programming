#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number up to which the times table should be printed.
 *
 * Description: If n is greater than 15 or less than 0, the function
 * does not print anything. Otherwise, it prints a properly formatted
 * multiplication table.
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;

			if (j != 0)
			{
				if ((res / 100) == 0)
					_putchar(' ');
				else
					_putchar((res / 100) + '0');

				if ((res / 10) == 0)
					_putchar(' ');
				else
					_putchar(((res / 10) % 10) + '0');
			}

			_putchar((res % 10) + '0');

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
