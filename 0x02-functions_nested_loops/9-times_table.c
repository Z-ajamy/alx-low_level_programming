#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return (0) when success
 *
 */
	void times_table(void)
{
	int n = 0;

	while (n <= 9)
	{
		int m = 0;

		while (m <= 9)
		{
		int	R = n * m;
/* اول-عمود-اصفار*/
		if (R == 0 && m == 0)
		{
			_putchar(R + '0');
		}
/**
 * كل-الي-مكون-من
 * -رقم--معادا-اول-2-في-العمود-الاخير
 */
		else if (R < 10 && m != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(R + '0');
			}
/*كل-الي-مكون-من-رقمين--معادا-العمود-الاخير*/
			else if (R >= 10 && m != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(R / 10 + '0');
				_putchar(R % 10 + '0');
			}
			/*العمود-الاخير*/
			else if (m == 9)
			{
			/*كل-العمود-عدا-اخر-2*/
				if (R >= 10)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(R / 10 + '0');
				_putchar(R % 10 + '0');
				}
				/*اول-2-في-العمود*/
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

