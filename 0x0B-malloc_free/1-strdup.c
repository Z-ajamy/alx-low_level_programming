#include"main.h"
int _strlem(char *s);

char *_strdup(char *str)
{
    char *ptr;
    int size, i;
    if (!str)
        return NULL;
    size = _strlem(str);

    ptr = (char *) malloc((size + 1) * sizeof(char));
    if (!ptr)
        return NULL;
    for (i = 0; i <= size; i++)
        ptr[i] = str[i];
    
    return ptr;
    
    
    
}

int _strlem(char *s)
{
    int i;
    if (!s)
        return 0;
    for (i = 0; s[i] != '\0'; i++)
        continue;
    return i;
}
