#include"main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string,
 *  in reverse, followed by a new line
*/
void print_rev(char *s)
{
	int i;

	for ( i = 0; s[i] != '\0'; i++)
	{
		continue;
	}

	while (i >= 0)
	{

		putchar(s[i]);

		i--;
	}
printf("\n");
	
}
