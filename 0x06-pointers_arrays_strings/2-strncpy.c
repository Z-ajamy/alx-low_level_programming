#include"main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: the main string.
 * @src: the second string.
 * @n: num of bits will be copied
 * Return:  pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, m;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0'; j++)
	{}
for (m = 0; src[m] != '\0' && m < n; m++)
{
	dest[m] = src[m];
}
if (j < n)
	dest[m] = '\0';

return (dest);
}
