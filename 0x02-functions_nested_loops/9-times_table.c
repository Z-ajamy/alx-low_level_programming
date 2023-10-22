#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
	void times_table(void)
{
    int i, n, c;

    for (i = 0; i < 10; i++)
    {
        for (n = 0; n < 10; n++)
        {
            c = n * i;
            if (c < 10 && n != 9)
            {
                _putchar(c + 48);
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
            }
            else if (c < 10 && n == 9)
            {
                 _putchar(c + 48);
            }
            if (c >= 10 && n != 9)
            {
                _putchar(c / 10 + 48);
                _putchar(c % 10 + 48);
                _putchar(',');
                _putchar(' ');
            }
            if (c >= 10 && n == 9)
            {
                _putchar(c / 10 + 48);
                _putchar(c % 10 + 48);
            }
        }
        _putchar('\n');
    }
}
