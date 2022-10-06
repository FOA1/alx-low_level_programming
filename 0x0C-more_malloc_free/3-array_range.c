#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers. Starting from min to max
 * @min: First number of the array
 * @max: Last number of the array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int arraySize, i, j = 0, *p;

	if (min > max)
		return (NULL);
	arraySize = max - min + 1;

	p = calloc(arraySize, sizeof(int));

	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		*(p + j) = i;
		j++;
	}

	return (p);
}
