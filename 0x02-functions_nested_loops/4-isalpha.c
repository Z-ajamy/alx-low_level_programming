#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: parameter int
 * Return: 1 if c is a letter, lowercase or uppercase
 */

	int _isalpha(int c)
{
	if (c <= 122 && c >= 97 || c <= 90 && c >= 65)
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
