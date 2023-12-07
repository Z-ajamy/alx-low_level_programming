#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line You can only use _putchar three times in your code
 */
void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			int j = i % 10;

			if (i > 9)
			{
				int m = i / 10;

				_putchar('0' + m);
			}
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
