#include"main.h"
/**
 * _strncat - a function that concatenates two strings  at most n bytes from src; and
 * @dest : STR
 * @n : num
 * @src : STR
*/
char *_strncat(char *dest, char *src, int n)
{
    int i, m;

    for (i = 0; dest[i] != '\0';)
    {
        i++;
    }
    for (m = 0; m <= n; m++)
    {
        dest[i] = src[m];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
