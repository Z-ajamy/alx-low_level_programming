#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the details of a dog.
 * If any member of the struct is NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
    char *name = "(nil)";
    char *owner = "(nil)";
    float age = 0; /* Changed from double to float for consistency */

    if (d == NULL)
        return;

    age = d->age;
    
    if (d->name)
        name = d->name;
    if (d->owner)
        owner = d->owner;

    printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, age, owner);
}
