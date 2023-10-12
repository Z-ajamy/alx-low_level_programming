#include"main.h"
#include<stdio.h>
/**
 * _puts - a function that prints a
 * string, followed by a new line
 * @str: string
*/
void _puts(char *str)
{
int i;
	for(i = 0; str[i] != 0; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
