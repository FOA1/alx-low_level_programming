#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 *
 * @d: pointer to the struct dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");

	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("%s\n", (*d).name);
	if (d -> age == 0)
		printf("(nil)\n");
	else
		printf("%f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", (*d).owner);
}
