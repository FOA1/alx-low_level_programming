#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of the elements
 *
 * Return: a pointer to the array, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = calloc(nmemb, size);

	if (p == NULL)
		return (NULL);

	return (p);
}
