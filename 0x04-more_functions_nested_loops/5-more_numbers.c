#include"main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
*/
void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
			{
				_putchar(48 + i);
			}
			else if (i > 9 && i < 15)
			{
				int j = i % 10;
				int m = i / 10;

				_putchar(48 + m);
				_putchar(48 + j);
			}
		}
		_putchar('\n');
	}
}
