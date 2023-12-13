#include"main.h"
#include<stdlib.h>
/**
 * _calloc - Allocates memory for an array and initializes it with zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = (void *) malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
