#include"function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an array.
 * @array: The array to be processed.
 * @size: The number of elements in the array.
 * @action: Pointer to the function to be applied to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (!array || size <= 0 || !(*action))
    {
        return;
    }

    for (i = 0; i < size; i++)
    {
        (*action)(array[i]);
    }
}
