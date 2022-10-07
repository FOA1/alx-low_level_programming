#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: the first memory block
 * @old_size: the size of the old memory block
 * @new_size: size of new memory block
 *
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p;

	if (ptr == NULL)
		p = malloc(new_size);
	else if (new_size == old_size)
		p = (int *)ptr;
	else if (new_size > old_size)
	{
		p = realloc(ptr, new_size);
		if (p == NULL)
			return (NULL);
	}
	else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	return (p);
}
