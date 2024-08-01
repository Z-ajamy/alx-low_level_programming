#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers using linear search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * 
 * Return: The first index where value is located or -1 if not found or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        /* Print the value being checked */
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);

        if (array[i] == value)
            return (i);
    }

    return (-1);
}
