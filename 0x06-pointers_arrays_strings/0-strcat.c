#include"main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest : str
 * @src : str
*/
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}
	return (dest);
}
