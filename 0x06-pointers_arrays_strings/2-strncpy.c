#include "main.h"

/**
 * _strncpy - Copies up to n characters from src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: Maximum number of characters to copy.
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* نسخ الأحرف من src إلى dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* ملء باقي المساحة بـ '\0' في حال كانت src أقصر من n */
	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
