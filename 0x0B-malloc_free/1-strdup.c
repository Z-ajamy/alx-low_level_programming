#include"main.h"
#include<stdlib.h>
/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: srting in stack
 * Return: string in heap if malloc success and str exist
*/
char *_strdup(char *str)
{
	int i;
	int j;
	char *p;

	for (i = 0; str[i] != '\0'; i++)
	{}
	if (str == NULL)
		return (NULL);
	p = (char *) malloc(sizeof(char) * (i + 1));

if (p == NULL || str == NULL)
{
	return (NULL);
}

for (j = 0; j <= i; j++)
{
	p[j] = str[j];
}
return (p);
}
