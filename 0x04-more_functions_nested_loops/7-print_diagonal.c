#include"main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n : a function that draws a diagonal line on the terminal.
*/
void print_diagonal(int n)
{
    if (n > 0)
    {
    int i, m;
    for (i = 1; i <= n + 1; i++)
    {
        for(m = 0; m <= i; m++)
    {
        _putchar(' ');
    }
    _putchar('\\');
    _putchar('\n');
    }
    }
    else
    {
        _putchar('\n');
    }
}
