#include"main.h"
#include<stdlib.h>
/**
 * 
 * 
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, j, m, l = 0;
    char *p;

    if (s1 == NULL)
    {s1 = "";}
    if (s2 == NULL)
    {s2 = "";}
    for (i = 0; s1 && s1[i] != '\0'; i++)
    {}
    for (j = 0; s2 && s2[j] != '\0'; j++)
    {}
    if (n >= j)
    {
        n = j;
    }
    
    p = (char *) malloc(sizeof(char) * i);
    if (p == NUL
    {
        free(p);
        return (NULL);
    }
    for (m = 0; m < i; m++)
    {
        p[m] = s1[m];
    }
    for (; m < (i + n); m++)
    {
        p[m] = s2[l];
        l++;
    }
    while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];
    p[i + n] = '\0';
    return(p);
}
