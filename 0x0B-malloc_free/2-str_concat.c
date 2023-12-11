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
	int i, n = 0;
	int j, m = 0;
	char *p;

	if (s1 == NULL)
        s1 = "";
	if (s2 == NULL)
        s2 = "";


	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}
	p = (char *) malloc(sizeof(char) * (i + j));

	if (p == NULL)
	{
		return (NULL);
	}
if (s1)
{
	for (n = 0; n < i; n++)
	{
		p[n] = s1[n];
	}
}
if (s2)
{
	for (m = 0; m <= j; n++)
	{
		p[n] = s2[m];
		m++;
	}
}
	return (p);

}
