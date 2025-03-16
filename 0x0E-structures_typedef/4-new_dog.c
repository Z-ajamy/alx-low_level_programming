#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *ptr = (dog_t *) malloc(sizeof(dog_t));
    if (!ptr)
        return NULL;

    ptr->age = age;
    ptr->name = name;
    ptr->owner = owner;
    return ptr;
}
