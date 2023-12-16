#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * 
 * 
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    int i, j;
    char *p,*ptr;

    dog_t *A;

    if (A == NULL)
        return (0);
    for (i = 0; name[i] != '\0'; i++)
    {}
    for (j = 0; owner[j] != '\0'; j++)
    {}
    A->name = name;
    A->age = age;
    A->owner = owner;

    p = (char *) malloc(sizeof(char) * i + 1);
    if (p == NULL || A->name == NULL)
        return (0);
    for (i = 0; name[i] != '\0'; i++)
        ptr[i] = name[i];
    ptr = (char *) malloc(sizeof(char) * j + 1);
    if (ptr == NULL || A->owner == NULL)
        return (0);
    for (j = 0; name[j] != '\0'; j++)
        ptr[j] = owner[j];
    return (A);
}
