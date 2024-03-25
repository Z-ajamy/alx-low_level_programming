#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -  a function that executes a function
 * given as a parameter on each element of an array.
 * on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
