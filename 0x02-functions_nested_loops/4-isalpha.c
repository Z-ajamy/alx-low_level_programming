#include"main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * Returns 1 if c is a letter, lowercase or uppercase, 0 otherwise
 * @c: is a character or otherwise
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
