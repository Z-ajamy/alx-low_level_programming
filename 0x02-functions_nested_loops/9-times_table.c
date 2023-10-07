#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 *
 */
	void times_table(void)
{
	int n = 0;

	while (n <= 9)
	{
		int m = 0;

		
		kjwhile (m <= 9)
		{
			printf("%d,  ", n * m);
		m++;
		}
		_putchar('\n');
		n++;
	}
}
