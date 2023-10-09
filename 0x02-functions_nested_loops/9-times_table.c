#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void print_times_table(int n)
{
	int n = 0;

	while (n <= 9)
	{
		int m = 0;

		while (m <= 9)
		{
		int	R = n * m;
		
		if (R == 0 && m == 0)
		{
			_putchar(R + '0');
		}
		else if (R < 10 && m != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(R + '0');
			}
			else if (R >= 10 && m != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(R / 10 + '0');
				_putchar(R % 10 + '0');
			}
			else if (m == 9)
			{
				if (R >= 10)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(R / 10 + '0');
				_putchar(R % 10 + '0');
				}
				else if (R < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(R % 10 + '0');
				}
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
