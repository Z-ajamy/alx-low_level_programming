#include"main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
*/
	void print_alphabet_x10(void)
{
	int i, n;

	for (n = 0; n < 11; n++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
					_putchar('\n');

	}
}
