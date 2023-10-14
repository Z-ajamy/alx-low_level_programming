#include"main.h"
#include<stdio.h>
/**
 * 
 * 
*/
void print_rev(char *s)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	
	for (n = i-1; n >=0; n--)
	{
		putchar(s[n]);
	}
}
