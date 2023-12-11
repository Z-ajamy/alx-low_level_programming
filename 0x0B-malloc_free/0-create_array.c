#include"main.h"
#include <stdlib.h>
/**
 * create_array -  a function that creates
 * an array of chars, and initializes it with a specific char.
 * @size: the array size
 * @c: the char in the array
 * Return: the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
