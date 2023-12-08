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
	int j, m;

	
	for (j = 0; src[j] != '\0'; j++)
	{}
for (m = 0; src[m] != '\0' && m < n; m++)
{
	dest[m] = src[m];
}
for (;m < n; m++)
	{dest[m] = '\0';}

return (dest);
}
