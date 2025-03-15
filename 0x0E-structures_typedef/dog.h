#ifndef DOG_H
#define DOG_H
#include<stdlib.h>

/**
 * struct dog - A structure representing a dog.
 * @name: Pointer to the dog's name.
 * @owner: Pointer to the dog's owner's name.
 * @age: The dog's age as a floating-point number.
 *
 * Description: This structure holds basic information
 * about a dog, including its name, age, and owner.
 */
struct dog
{
    char *name;
    char *owner;
    double age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* DOG_H */
