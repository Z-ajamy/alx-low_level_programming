#include "main.h"
int _strlen(char *s);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int size1, size2;
    char *ptr;
    int i, j;
    if (!s1)
        s1 = "";
    if (!s2)
    {
        s2 = "";
    }
    size1 = _strlen(s1);
    size2 = _strlen(s2);
    if ((unsigned int)size2 < n)
        n = size2;
    ptr = malloc(sizeof(*ptr) * (size1 + n + 1));
    if (!ptr)
        return NULL;
    for (i = 0; i < size1; i++)
    {
        ptr[i] = s1[i];
    }
    for (j = 0; (unsigned int)j < n; i++, j++)
    {
        ptr[i] = s2[j];
    }
    ptr[i] = '\0';
    return ptr;
    

}

int _strlen(char *s)
{
    int i = 0;
    if (s == NULL)
        return i;
    while (s[i])
    {
        i++;
    }
    return i;
}
