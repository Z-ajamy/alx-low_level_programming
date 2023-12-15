#include"dog.h"
#include<stdio.h>
/**
 * 
 * 
 * 
 * 
*/
void print_dog(struct dog *d)
{
    if (d->name == NULL)
        d->name = "(nil)";
    if (d->owner == NULL)
        d->owner = "(nil)";
printf("Name: %s\n",d->name);
printf("Age: %f\n",d->age);
printf("Owoner: %s\n",d->owner);

}
