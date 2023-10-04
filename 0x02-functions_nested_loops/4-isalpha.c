#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *@c: parameter int
 *Return:1 if c is a letter, lowercase or uppercase
 *Return: 0 otherwise
 */

	int _isalpha(int c)
{
	if (c <= 122 && c >= 97 || c <= 90 && C >= 65)
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
