#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is a char
 * that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, n, res = 0, pow;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			pow = 1;
			for (n = 0; n < (len - i - 1); n++)
			{
				pow *= 2;
			}
			res = res + pow;
		}
		else if (b[i] == '0')
		{
			continue;
		}
		else
			return (0);
	}
	return (res);
}
