#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 *
 * Description: contains the name, age, and owner of a dog
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* function prototype */
void init_dog(dog_t *d, char *name, float age, char *owner);

#endif /* DOG_H */
