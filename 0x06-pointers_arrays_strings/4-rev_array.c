#include"main.h"
/**
 * reverse_array - a function that reverses
 * the content of an array of integers.
 * @n: sizeof(a)/sizeof(int)
 * @a: array of NUMs
*/
void reverse_array(int *a, int n)
{
	int m, i, p;

	i = n - 1;
for (m = 0; m < i; m++, i--)
{
	p = a[m];
	a[m] = a[i];
	a[i] = p;
}
}
