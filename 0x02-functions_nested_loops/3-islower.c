#include "main.h"
/**
 * _islower - lower or not??
 *
 * @c: is a parameter
 *Return: 0 lower 1 not
 */
	int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
