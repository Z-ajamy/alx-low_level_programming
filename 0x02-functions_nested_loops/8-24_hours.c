#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
	void jack_bauer(void)
{
    int i, n;

    for (i = 0; i < 24; i++)
    {
        for (n = 0; n < 60; n++)
        {
           _putchar(i / 10 + 48);
           _putchar(i % 10 + 48);
           _putchar(':');
           _putchar(n / 10 + 48);
           _putchar(n % 10 + 48);
           _putchar('\n');


        }
        
    }
    
}
