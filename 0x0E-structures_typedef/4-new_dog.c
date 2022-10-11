#include "dog.h"
#include <stdlib.h>


/**
 * _strlen - gets the length of a string
 * @s: pointer to the string we want to get its length
 *
 * Return: the length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * _strcpy - copies src string to the dest
 * @src: string to copy
 * @dest: the destination
 *
 * Return: a pointer to the destination string
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}

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
	char *newName, *newOwner;
	int lName, lOwner;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	lName = _strlen(name);
	newName = malloc(lName + 1);
	if (newName == NULL)
	{
		free(ptr);
		return (NULL);
	}
	_strcpy(newName, name);

	lOwner = _strlen(owner);
	newOwner = malloc(lOwner + 1);
	if (newOwner == NULL)
	{
		free(newName);
		free(ptr);
		return (NULL);
	}
	_strcpy(newOwner, owner);

	ptr->name = newName;
	ptr->age = age;
	ptr->owner = newOwner;

	return (ptr);
}
