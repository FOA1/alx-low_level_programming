#include "main.h"
#include <stdlib.h>
/**
 * create_array - allocates memory using malloc
 * @b: The size of the memory to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
