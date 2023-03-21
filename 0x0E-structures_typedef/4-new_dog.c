#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *new_name, *new_owner;
    int name_len, owner_len;

    /* allocate memory for the new dog */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* allocate memory for the name */
    for (name_len = 0; name[name_len] != '\0'; name_len++)
        ;
    new_name = malloc(name_len + 1);
    if (new_name == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    /* allocate memory for the owner */
    for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
        ;
    new_owner = malloc(owner_len + 1);
    if (new_owner == NULL)
    {
        free(new_name);
        free(new_dog);
        return (NULL);
    }

    /* copy the name and owner */
    for (int i = 0; i <= name_len; i++)
        new_name[i] = name[i];
    for (int i = 0; i <= owner_len; i++)
        new_owner[i] = owner[i];

    /* assign values to the new dog */
    new_dog->name = new_name;
    new_dog->age = age;
    new_dog->owner = new_owner;

    return (new_dog);
}
