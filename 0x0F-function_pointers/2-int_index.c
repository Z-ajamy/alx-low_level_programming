#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array && size > 0 && cmp)
    {
        int i, n = 0;
        for (i = 0; i < size; i++)
        {
            if ((*cmp)(array[i]))
            {
                n++;
            }
        }
        if (n > 0)
        {
            return n;
        }
        else
            return (-1);
    }
    else
        return (-1);
}
