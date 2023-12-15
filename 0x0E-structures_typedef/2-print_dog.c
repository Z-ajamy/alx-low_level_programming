#include"dog.h"
#include<stdio.h>

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the dog structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		printf("Owoner: (nil)\n");
		else
			printf("Owoner: %s\n", d->owner);
	}
	else
	return;
}
