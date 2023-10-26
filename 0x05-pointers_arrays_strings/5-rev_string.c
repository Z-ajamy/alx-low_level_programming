#include"main.h"
#include<stdio.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j, n;
	char a;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	j = i - 1;
	for (n = 0; n < j ; n++)
	{
		a = s[n];
		s[n] = s[j];
		s[j] = a;
	   j--;
	}
	
	
}
