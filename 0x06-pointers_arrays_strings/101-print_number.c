#include "main.h"
void print_number(int n)
{
    int len = 0, i, a;
	unsigned int x, m;
    if (n < 0)
    {
        _putchar('-');
        m = n * -1;
    }
	else
    	m = n;
	x = m;
    while (m /= 10)

        len++;
    len++;

    for (i = len; i > 0; i--)
    {
        a = x / _pow(10, i - 1);
        a %= 10;
        _putchar(a + '0');
    }
}

int _pow(int a, int b)
{
    int temp = 1;
    if (b == 0)
        return 1;

		while (b > 0)
	{
		if (b % 2 == 1)
			temp *= a;

		a *= a;
		b /= 2;
	}
	
    return temp;
}
