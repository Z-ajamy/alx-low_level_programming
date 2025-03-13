#include "main.h"

/**
 * _reverse_array - Reverses the content of an array of characters.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 */
void _reverse_array(char *a, int n);

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result or 0 if the result cannot fit in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i = 0;

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

	_reverse_array(r, i);
	return (r);
}

/**
 * _reverse_array - Reverses the content of an array of characters.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 */
void _reverse_array(char *a, int n)
{
	int m, i, p;

	i = n - 1;
	for (m = 0; m < i; m++, i--)
	{
		p = a[m];
		a[m] = a[i];
		a[i] = p;
	}
}
