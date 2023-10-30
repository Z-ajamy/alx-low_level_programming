#include"main.h"
#include <stdio.h>

int lengh(char *str)
{
    int i;
    if(str == NULL)
        return (0);
    for (i = 0; str[i] != '\0'; i++)
    {}
    return(i);
}


char *_strcat(char *dest, char *src)
{
    int len1, len2, i;
    len1 = lengh(dest);
    len2 = lengh(src);

    for (i = 0; i <= len2; i++)
    {
      dest[(len1-1)+i] = src[i];
    }
    return (dest);
}
