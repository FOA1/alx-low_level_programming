#include "dog.h"
/**
 *
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	typedef struct dog_t new_dog;

	(*new_dog).name = name;
	(*new_dog).age = age;
	(*new_dog).owner = owner;

	if (new_dog == NULL)
		return (NULL);
	return (new_dog);
}
