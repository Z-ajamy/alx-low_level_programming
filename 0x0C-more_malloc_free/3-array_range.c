#include"main.h"
#include<stdlib.h>
/**
 * array_range - Creates an array of integers.
 *
 * @min: The minimum value for the array (inclusive).
 * @max: The maximum value for the array (inclusive).
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 *
 * Description: The array created contains all values from min to max,
 * ordered from min to max. If min > max, or if malloc fails, NULL is returned.
 */
int *array_range(int min, int max)
{
	int i, n;
	int *p;

	/* Check if min is greater than or equal to max */
	if (min >= max)
		return (NULL);
	/* Calculate the size of the array */
	i = max - min;
	/* Allocate memory for the array */
	p = (int *) malloc(sizeof(int) * (i + 1));
	/* Check if malloc fails */
	if (p == NULL)
		return (NULL);
/* Fill the array with values from min to max */
for (n = 0; n <= i;n++)
	p[n] = min++ ;
return (p);
}
