#include"dog.h"
#include<stdio.h>

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the dog structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owoner: %s\n", d->owner);

}
