#include "main.h"
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is a char
 * that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, res = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			res = res + pow(2, (len - i - 1));
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
