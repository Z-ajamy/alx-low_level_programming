#include"main.h"
/**
 * _strlen - a function that
 * returns the length of a string
 * @s: string
 * @*s: string pointer
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != \0)
	{
		i++;
	}
	return (i);
}
