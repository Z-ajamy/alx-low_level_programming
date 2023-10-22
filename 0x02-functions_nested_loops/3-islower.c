#include"main.h"
/**
 * _islower - function that checks for lowercase character
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 * @c: is a character
*/
	int _islower(int c)
	{
		if (c < 123 && c > 96)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
