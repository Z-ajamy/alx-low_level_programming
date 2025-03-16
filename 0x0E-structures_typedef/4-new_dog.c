#include "dog.h"

/**
 * counrstr - Computes the length of a string.
 * @str: Pointer to the string.
 *
 * Return: The length of the string.
 */
int counrstr(char *str)
{
    int i;

    if (!str)
        return (0);

    for (i = 0; str[i] != 0; i++)
        continue;

    return (i);
}

/**
 * _strcpy - Copies a string from source to destination.
 * @s: Source string.
 * @str: Destination string.
 */
void _strcpy(char *s, char *str)
{
    int i;

    if (!s || !str)
        return;

    for (i = 0; s[i] != 0; i++)
    {
        str[i] = s[i];
    }
    str[i] = '\0';
}

/**
 * new_dog - Creates a new dog structure.
 * @name: Pointer to the dog's name.
 * @age: The dog's age.
 * @owner: Pointer to the dog's owner's name.
 *
 * Return: Pointer to the newly created dog structure,
 * or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    char *sptr1, *sptr2;
    dog_t *ptr = (dog_t *) malloc(sizeof(dog_t));

    if (!ptr)
        return (NULL);

    ptr->age = age;

    if (name)
    {
        sptr1 = (char *) malloc(sizeof(char) * (counrstr(name) + 1));
        if (sptr1)
        {
            _strcpy(name, sptr1);
            ptr->name = sptr1;
        }
        else
        {
            free(ptr);
            return (NULL);
        }
    }

    if (owner)
    {
        sptr2 = (char *) malloc(sizeof(char) * (counrstr(owner) + 1));
        if (sptr2)
        {
            _strcpy(owner, sptr2);
            ptr->owner = sptr2;
        }
        else
        {
            free(ptr);
            if (name)
            {
                free(sptr1);
            }
            return (NULL);
        }
    }
    return (ptr);
}
