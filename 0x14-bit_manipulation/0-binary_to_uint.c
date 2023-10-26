#include "main.h"
/**
 * raise_power - raise a number to a power
 * @power: power to raise the number to
 * @base: base number
 * Return: the result of the operation
*/
int raise_power(int power, int base)
{
	int ans = 1;

	while (power > 0)
	{
		ans *= base;
		power--;
	}
	return (ans);
}
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: pointer to the binary string
 * Return: converted number or 0 if b is NULL or contains chars not 0 or 1
*/
unsigned int binary_to_uint(const char *b)
{
	int ans = 0, i = 0, len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		ans += (b[i] - '0') * raise_power(len - 1, 2);
		len--;
		i++;
	}

	return (ans);
}
