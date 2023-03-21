#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: structure called dog containing information about a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* function prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
