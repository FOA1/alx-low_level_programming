#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - the  details of a dog
 * @name: the name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Define a new type struct dog with the following elements:
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* Dog_H */
