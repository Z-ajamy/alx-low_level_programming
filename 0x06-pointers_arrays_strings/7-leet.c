#include"main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @s: string
 * Return: the code
*/
char *leet(char *s)
{
	int i, j;
	char a[] = {'A', '4', 'E', '3', 'O', '0', 'T', '7', 'L', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if (s[i] == a[j] || s[i] == a[j] + 32)
			{
				s[i] = a[j + 1];
				break;
			}
		}
	}
	return (s);
}
