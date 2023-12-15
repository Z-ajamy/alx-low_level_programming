#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dogs;)
 * @name: its name
 * @age: its age
 * @owner: its oner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
