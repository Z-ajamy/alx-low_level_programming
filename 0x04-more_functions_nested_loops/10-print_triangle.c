#include"main.h"
/**
 * print_triangle -  function that prints a triangle,
 * followed by a new line.
 * @size :  is the size of the triangle
*/
void print_triangle(int size)
{
    int i, n, j;

    if (size > 0)
    for (i = size; i > 0; i--)
    {
        _putchar('.');
    }
    else
    _putchar('\n');
    
}
