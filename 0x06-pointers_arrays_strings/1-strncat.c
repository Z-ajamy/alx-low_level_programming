#include"main.h"
/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, m, j;

	for (i = 0; dest[i] != '\0';i++){}
	for (j = 0; src[j] != '\0';j++){}
if (n >= j)
{
	for (m = 0; m < n; m++)
	{
		dest[i] = src[m];
		i++;
	}
}
else
{
	for (m = 0; m < j; m++)
	{
		dest[i] = src[m];
		i++;
	}
}
	dest[i] = '\0';
	return (dest);
}
