#include "dog.h"
int counrstr(char *str);
void _strcpy(char *s, char *str);

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *ptr = (dog_t *) malloc(sizeof(dog_t));
    if (!ptr)
        return NULL;

    ptr->age = age;
    if (!name)
    {
        char *sptr1 = (char *) malloc(sizeof(char) * (counrstr(name) + 1));
        if (!sptr1)
        {
            _strcpy(name, sptr1);
            ptr->name = sptr1;
        }
    }
    
    if (!owner)
    {
        char *sptr2 = (char *) malloc(sizeof(char) * counrstr(owner) + 1);
        if (!sptr2)
        {
            _strcpy(owner, sptr2);
            ptr->owner = sptr2;
        }
    }
    return ptr;
}

int counrstr(char *str)
{
    int i;
    if (!str)
    {
        return 0;
    }
    
    for (i = 0; str[i] != 0; i++)
        continue;
    return i;
}

void _strcpy(char *s, char *str)
{
    int i;
    if (!s || !str)
        return;
    for (i = 0; s[i] != 0; i++)
        {
            str[i] = s[i];
        }
        str[i] = '\0';
}
