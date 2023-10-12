#include"main.h"
/**
 * swap_int - function that swaps the
 * values of two integers
 * @a: number1
 * @b: number2
 * *a: pointer to the num1
 * *b: pointer to the num2
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
