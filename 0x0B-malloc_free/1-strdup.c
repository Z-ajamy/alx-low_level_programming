#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
	char *_strdup(char *str)
{
	int num;
	char *p;
	int n;
	if (str == NULL)
		return (NULL);
 
	for (num = 0; str[num] != '\0'; num++)
	{}
	p = (char *) malloc((num + 1) * sizeof(char));

	if (p == (NULL))
	{
		return (NULL);
	}
	for (n = 0; n <= (num -2); n++)
	{
		p[n] = str[n];
	}
	return (p);
}