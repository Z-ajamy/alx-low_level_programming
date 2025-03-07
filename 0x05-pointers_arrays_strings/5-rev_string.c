#include"main.h"
#include<stdio.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j, n;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	n = i - 1;
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[n];
		s[n] = temp;
		n--;
	}
}
