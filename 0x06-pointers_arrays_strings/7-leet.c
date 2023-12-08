#include"main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @s: string
 * Return: the code
*/
char *leet(char *s)
{
	int i, n;
	char a[] = "AaeEOotTlL";
	char b[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; a[n] != '\0'; n++)
		{
			if (s[i] == a[n])
			{
				s[i] = b[n];
			}
		}
	}
	return (s);
}
