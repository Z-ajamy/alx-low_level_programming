#include "main.h"
/**
 * print_alphabet_x10.c - It prints the lowercase alphabet 10 times
 * each time on a special line
 *
 */

	void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int n = 97;

		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
		 _putchar('\n');
		i++;
	}
}
