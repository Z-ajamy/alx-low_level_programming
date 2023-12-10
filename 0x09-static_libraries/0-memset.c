#include"main.h"
#include <stdio.h>
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: Pointer to the object to copy the character.
 * @b: The character to copy. It can be a character,
 * a normal value as well a boolean value.
 * @n: Number of bytes to copy.
 * Return: string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
