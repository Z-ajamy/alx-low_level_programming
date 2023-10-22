#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
int i, j, m;
if (n > 0 && n < 15)
{
for (i = 0; i <= n ; i++)
{
for (j = 0; j <= n; j++)
{
m = i * j;
if (n > 0 && n < 15)
{
if (m < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(m + 48);
}
else if (m > 9 && m < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((m / 10) + 48);
_putchar((m % 10) + 48);
}
else if (m > 99 && m < 1000)
{
_putchar(',');
_putchar(' ');
_putchar((m / 100) + 48);
_putchar(((m / 10) % 10) + 48);
_putchar((m % 10) + 48);
}
if (j == 0)
{
_putchar(m + 48);
}
}
else if (n < 0 || n > 15)
{
continue;
}
}
_putchar('\n');
}
}
}
