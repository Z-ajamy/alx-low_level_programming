#include "dog.h"
int counrstr(char *str);


dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *ptr = (dog_t *) malloc(sizeof(dog_t));
    if (!ptr)
        return NULL;

    ptr->age = age;
    if (!name)
    {
        char *pnam = (char *) malloc(sizeof(char) * counrstr(name));
        if (!pstr)
        {
            ptr->name = pstr;
        }
        else
        {
            free(pstr);
        }
        
    }
    
    if (!owner)
    {
        char *pown = (char *) malloc(sizeof(char) * counrstr(owner));
        if (!pstr)
        {
            pown->owner = owner;
        }
        else
        {
            free(pown);
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
