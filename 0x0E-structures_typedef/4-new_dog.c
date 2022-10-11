#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog using Malloc
 *
 * @name: The name of the dog
 * @age: The age
 * @owner: The Owner of the dog
 *
 * Return: a pointer to the new_dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	if (ptr->name == NULL || &(ptr->age) == NULL || ptr->owner == NULL)
	       free(ptr);

	return (ptr);
}
