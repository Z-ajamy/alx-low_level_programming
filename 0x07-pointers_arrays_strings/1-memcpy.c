#include"main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: A pointer to the memory location
 * from where the data is to be copied.
 * @src: A pointer to the memory location
 * where the copied data will be stored.
 * @n:The number of bytes to be copied.
 * Return: new dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
