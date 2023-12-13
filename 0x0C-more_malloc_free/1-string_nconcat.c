#include"main.h"
#include<stdlib.h>
/**
 * 
 * 
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, j, m, l = 0;
    char *p, *ptr, *pp;

    if (s1 == NULL)
    {s1 = "";}
    if (s2 == NULL)
    {s2 = "";}
    for (i = 0; s1[i] != '\0'; i++)
    {}
    for (j = 0; s2[j] != '\0'; j++)
    {}
    if (n >= j)
    {
        n = j;
    }
    
    p = (char *) malloc(sizeof(char) * i);
    ptr = (char *) malloc(sizeof(char) * j);
    pp = (char *) malloc(sizeof(char) * (i + n + 1));
    if (p == NULL || ptr == NULL || pp == NULL)
    {
        free(p);
        free(ptr);
        free(pp);
        return (NULL);
    }
    for (m = 0; m < i; m++)
    {
        pp[m] = s1[m];
    }
    for (; m < (i + n); m++)
    {
        pp[m] = s2[l];
        l++;
    }
    pp[i + n] = '\0';
    return(pp);
}
