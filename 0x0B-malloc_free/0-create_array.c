#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 *			and initializes it with a specific char.
 * @size: The size of the array
 * @c: The character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = (char *) malloc(size);
	if (p == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		*(p + i) = c;
	return (p);
}
