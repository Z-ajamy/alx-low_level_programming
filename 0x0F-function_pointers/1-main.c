#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
	printf("(%d)\n", elem);
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5] = {28734, 236745, 234, 4, 2378};

	array_iterator(array, 1, &print_elem);
	return (0);
}
