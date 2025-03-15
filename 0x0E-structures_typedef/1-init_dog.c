#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to the dog's name
 * @age: The dog's age
 * @owner: Pointer to the dog's owner's name
 *
 * Description: This function initializes the members of
 * the struct dog with the given parameters if the struct
 * pointer is not NULL.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL) /* Corrected the typo (NULL instead of NWLL) */
    {
        return;
    }

    d->name = name;
    d->age = age;
    d->owner = owner;
}
