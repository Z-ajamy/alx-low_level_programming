#include"dog.h"

void print_dog(struct dog *d)
{
    char *name = "(nil)"; 
    char *owner = "(nil)";
    double age = 0;

    if (d == NULL)
        return;
    age = d->age;
    if (d->name)
    {
        name = d->name;
    }
    if (d->owner)
    {
        owner = d->owner;
    }
    printf("Name: %s\nAge: %.6f\nOwner: %s\n",
        name, age, owner);
    
}
