#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: void
 */
	void jack_bauer(void)
{
		int n = 0;

	while (n <= 2)
	{
		int m = 0;

		while (m <= 9)
		{
			int l = 0;

			while (l <= 5)
			{
				int p = 0;

				while (p <= 9)
				{
					_putchar('0' + n);
					_putchar('0' + m);
					_putchar(':');
					_putchar('0' + l);
					_putchar('0' + p);
					_putchar('\n');
				p++;
								}
			l++;
						}
		m++;
				}
	n++;
		}
}
