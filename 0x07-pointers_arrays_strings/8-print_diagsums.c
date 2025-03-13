#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, i, sum2 = 0, j = size - 1;

	for (i = 0; i < size; i++, j--)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + j);
	}
	printf("%d, %d\n", sum1, sum2);
}
