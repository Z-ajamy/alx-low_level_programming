#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a right-aligned triangle of '#' characters.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (j <= (size - i))
            {
                printf(" ");
            }
            else
                printf("#");
        }
        if (i < size)
        {
            printf("\n");
        }                
    }
    printf("\n");    
}
