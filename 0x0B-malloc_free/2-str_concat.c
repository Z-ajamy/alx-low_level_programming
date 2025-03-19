#include"main.h"
int _strlen(char *str);

char *str_concat(char *s1, char *s2)
{
    int size1, size2, i, j;
    char *ptr;
    if (!s1 || !s2)
        return NULL;
    size1 = _strlen(s1);
    size2 = _strlen(s2);
    ptr = (char *)malloc((size1 + size2 + 1) * sizeof(char));
    if (!ptr)
        return NULL;
    for (i = 0; i < size1; i++)
        ptr[i] = s1[i];
    for (j = 0; j <= size2; j++, i++)
        ptr[i] = s2[j];
    return ptr;
    
    
    
}

int _strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;

    return i;
}
