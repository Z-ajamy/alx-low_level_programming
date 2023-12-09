#include"main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 * Return: This function
 * returns the number of characters in the
 * initial segment of str1 which consist
 * only of characters from str2.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, m;

	m = 0;
	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
			}
		}
	}
	return (m);
}
