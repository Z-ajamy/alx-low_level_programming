#include"main.h"
#include<stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: the array in dynamic memory.
*/
int **alloc_grid(int width, int height)
{
	int i, a, b, c, j;
	int **array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	if (width <= 0 || height <= 0)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		array[i] = (int *) malloc(sizeof(int) * width);
	for (a = 0; a < i; a++)
	{
		if (array[a] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			array[b][c] = 0;
		}
	}
	return (array);
}
