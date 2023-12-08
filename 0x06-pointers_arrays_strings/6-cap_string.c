#include"main.h"
/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: words string
 * Return: capitalizes all words of a string
*/
char *cap_string(char *s)
{
	int i, j;
	char a[] = " \t\n,;.!?(\"){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (i == 0 && s[i] <= 122 && s[i] >= 97)
			s[i] -= 32;

			if (s[i] == a[j])
			{
				if (s[i + 1] <= 122 && s[i + 1] >= 97)
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
return (s);
}
