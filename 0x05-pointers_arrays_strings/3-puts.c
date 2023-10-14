#include"main.h"
#include<stdio.h>
/**
 * 
 * 
 * 
*/
void _puts(char *str)
{
    int i;

    for (i = 0; str[i] != '\n'; i++)
    {
       _putchar(str[i]);
    }
    _putchar('\n');
}
