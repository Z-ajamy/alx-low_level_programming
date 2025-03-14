#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if ((res / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
			}
			else
			{
				_putchar((res / 10) + '0');
			}

			_putchar((res % 10) + '0');

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
