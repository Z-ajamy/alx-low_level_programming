#include"main.h"
#include <stdio.h>

/**
 * _strchr -  a function that locates a character in a string.
 * @s: string
 * @c: char
 * Return: string
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (NULL);
}
