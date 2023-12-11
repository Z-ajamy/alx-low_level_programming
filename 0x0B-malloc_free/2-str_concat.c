#include"main.h"
#include<stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: string1string2
*/
char *str_concat(char *s1, char *s2)
{
	int i, n;
	int j, m;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}
	p = (char *) malloc(sizeof(char) * (i + j));

	if (p == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < i; n++)
	{
		p[n] = s1[n];
	}
	for (m = 0; m <= j; n++)
	{
		p[n] = s2[m];
		m++;
	}
	return (p);

}
