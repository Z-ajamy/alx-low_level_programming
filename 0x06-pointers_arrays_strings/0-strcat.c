#include"main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest : str
 * @src : str
 * Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		continue;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
