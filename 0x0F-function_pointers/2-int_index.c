#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a given function.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Return: The index of the first element for which cmp does not return 0.
 *         If no element matches, or if size <= 0, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (size <= 0 || !array || !(*cmp))
        return (-1);

    for (i = 0; i < size; i++)
    {
        if ((*cmp)(array[i]))
        {
            return (i);
        }
    }
    return (-1);
}
