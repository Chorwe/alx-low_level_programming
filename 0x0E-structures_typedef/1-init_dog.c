#include "dog.h"

/**
 * init_dog - initialize a dog struct
 * @d: pointer to dog struct to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
