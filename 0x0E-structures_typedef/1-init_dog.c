#include "dog.h"
/**
 * init_dog - Initializes the dog structure
 *
 * @d: the first member
 * @name: the second member
 * @age: the third member
 * @owner: the fourth member
 *
 * Description - Initializes the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
