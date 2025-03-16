#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure to be freed.
 */
void free_dog(dog_t *d)
{
    if (!d)
        return;

    if (d->name)
        free(d->name);

    if (d->owner)
        free(d->owner);

    free(d);
}
