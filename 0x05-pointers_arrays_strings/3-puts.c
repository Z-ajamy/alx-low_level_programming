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
       putchar(str[i]);
    }
    putchar('\n');
}
