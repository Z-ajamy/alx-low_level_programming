#include"main.h"
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: This is the C string to be scanned.
 * @accept: This is the C string containing the characters to match.
 * Return: This function returns a pointer to the character in str1 that
 * matches one of the characters in str2,
 * or NULL if no such character is found.
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
