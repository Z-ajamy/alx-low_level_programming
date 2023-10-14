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

    for (i = 0; str[i] != '\0'; i++)
    {
       putchar(str[i]);
    }
    putchar('\n');
}
