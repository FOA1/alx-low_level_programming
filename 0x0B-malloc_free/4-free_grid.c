#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously
 *			created by the alloc_grid function
 * @grid: The memory block I want to free
 * @height: The height of the block
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
