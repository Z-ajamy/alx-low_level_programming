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
		if (n == 2 && m == 4)
		{ return 0;
		}
		else
		{	while (l <= 5)
			{
				
				int p = 0;

				while (p <= 9)
				{
					putchar('0' + n);
					putchar('0' + m);
					putchar(':');
					putchar('0' + l);
					putchar('0' + p);
					putchar('\n');
				p++;
								}
			l++;
						}
					}
		m++;
				}
	n++;
		}
}
