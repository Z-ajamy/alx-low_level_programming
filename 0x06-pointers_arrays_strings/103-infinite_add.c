#include "main.h"

/**
 * infinite_add - Adds two large numbers represented as strings.
 * @n1: First number string.
 * @n2: Second number string.
 * @r: Buffer to store result.
 * @size_r: Buffer size.
 *
 * Return: Pointer to the result, or 0 if it cannot fit in buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i = 0, j;
	char temp;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	len1--;
	len2--;

	while (len1 >= 0 || len2 >= 0 || carry > 0)
	{
		sum = carry;

		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';

		if (i >= size_r - 1)
			return (0);

		r[i] = (sum % 10) + '0';
		carry = sum / 10;

		len1--;
		len2--;
		i++;
	}

	r[i] = '\0';

	for (j = 0; j < i / 2; j++)
	{
		temp = r[j];
		r[j] = r[i - j - 1];
		r[i - j - 1] = temp;
	}
	return (r);
}
