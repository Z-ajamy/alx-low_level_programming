#include"main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
	int _isalpha(int c)
	{
		if ((c < 123 && c > 96) || (c < 91 && c > 64))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
