#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - alocates a 2 - D array fro the heap
 * @width: The width
 * @height: The height
 *
 * Return: a pointer to the first element
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(height * 4);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int*)malloc(width * 4);
		if (p == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
